#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Someone"), _signed(false), _signGrade(150), _execGrade(150) {};

AForm::AForm(std::string name, int signG, int execG) : 
    _name(name), _signed(false), _signGrade(signG), _execGrade(execG)
{
    if (signG < 1 || execG < 1)
        throw AForm::GradeTooHighException();
    if (signG > 150 || execG > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other): 
	_name(other._name),
	_signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	this->_signed = other._signed;
}

AForm& AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSign() const
{
	return this->_signed;
}

int AForm::getSignGrade() const
{
	return this->_signGrade;
}

int AForm::getExecGrade() const
{
	return this->_execGrade;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low ";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}

void AForm::beSigned(Bureaucrat &other)
{
	if (other.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}
void AForm::execute(Bureaucrat const &executor) const 
{
	if (this->getSign() == false)
    {
        throw AForm::FormNotSignedException();
    }
	if (executor.getGrade() > this->getExecGrade())
    {
        throw AForm::GradeTooLowException();
    }
	this->executeAction(); //wykonuje akcje z innych klas
}

std::ostream &operator<<(std::ostream &out, const AForm &src)
{
	out << "Form name: " << src.getName()
		<< " [Signed: " << (src.getSign() ? "Yes" : "No") << "]"
		<< " [Sign Grade: " << src.getSignGrade() << "]"
		<< " [Exec Grade: " << src.getExecGrade() << "]";
	return out;
}
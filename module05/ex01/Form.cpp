#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Someone"), _signed(false), _signGrade(0), _execGrade(0) {};

Form::Form(int x) : _name("Someone"), _signed(false), _signGrade(x), _execGrade(0) {};

Form::Form(const Form &other) : 
	_name(other._name),
	_signGrade(other._signGrade),
	_execGrade(other._execGrade)
{
	this->_signed = other._signed;
}

Form &Form::operator=(const Form &other) // nadpisujemy tylko to co nie jest const
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const
{
	return this->_signed;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecGrade() const
{
	return this->_execGrade;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low ";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

void Form::beSigned(Bureaucrat &other)
{
	if (other.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << "Form name: " << src.getName() << " with grade sign: " << src.getSign()
		<< " with grade exec: " << src.getExecGrade();
	return out;
}
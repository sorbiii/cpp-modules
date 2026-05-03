#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Stanisław"), _grade(1){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (grade < 1)
			throw  Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low!";
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade() //decrement
{
	std::cout << "attempting to increase grade" << std::endl;

	try
	{
		if (this->_grade == 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade--;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	std::cout << "attempting to decrease grade" << std::endl;

	try
	{
		if (this-> _grade == 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade++;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return os;
}
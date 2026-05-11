#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
            virtual const char* what() const throw();
		};

		AForm();
		AForm(std::string name, int signG, int execG);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm(); //check what will happen without

		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(Bureaucrat& other);
		void execute(Bureaucrat const &executor) const;
		virtual void executeAction() const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm& src);

#endif
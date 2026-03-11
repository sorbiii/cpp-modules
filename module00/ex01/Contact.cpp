#include "PhoneBook.hpp"

Contact::Contact()
{
	;
}

Contact::~Contact()
{
	;
}

bool Contact::_checkName(std::string input)
{
	for (int i = 0; i < (int)input.length(); i++)
	{
		if (std::isalpha(input[i]))
			continue;
		else
		{
			std::cout << "Name or last name can contain only alphabetical chracters\n";
			return (false);
		}
	}
	return (true);
}

bool Contact::_blankLine(std::string input)
{
	for (int i = 0; i < (int)input.length(); i++)
	{
		if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
			continue;
		else	
			return (false);
	}
	return (true);
}

bool Contact::checkNumber(std::string input)
{
	for (int i = 0; i < (int)input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Please enter a number!" << std::endl;
			return (false);
		}
	}
	return (true);
}

bool Contact::_checkInfo(std::string input, std::string message)
{
	if (input.empty() || _blankLine(input))
	{
		std::cout << "This field cannot be empty, write again\n";
		return (false);
	}
	if (message == "Enter phone number:")
	{
		if (checkNumber(input) == false)
			return (false);
		if ((int)input.length() != 9)
		{
			std::cout << "Phone number can only have 9 digits\n";
			return (false);
		}
	}
	if (message == "Enter first name:" || message == "Enter last name:")
	{
		if (_checkName(input) == false)
			return (false);
	}
	return (true);
}

std::string Contact::_getInfo(std::string message)
{
	std::string input;

	while (1)
	{
		std::cout << message << '\n';
		std::getline(std::cin, input);
		if (_checkInfo(input, message) == true)
			break;
		else
			continue;
	}
	return (input);
}

std::string Contact::_makePrintable(std::string object)
{
	std::string variable;

	if (object .size() <= 10)
		variable = object;
	else
		variable = object.substr(0, 9) + ".";
	return (variable);
}

void Contact::printContacts()
{
	std::cout << std::right << std::setw(10) << _makePrintable(this->_firstName) << '|';
	std::cout << std::right << std::setw(10) << _makePrintable(this->_lastName) << '|';
	std::cout << std::right << std::setw(10) << _makePrintable(this->_nickname) << '|';
	std::cout << std::endl;
}

void Contact::printFullContact()
{
    std::cout << "First Name: " << this->_firstName << std::endl;
    std::cout << "Last Name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}

void Contact::setInfo()
{
	this->_firstName = _getInfo("Enter first name:");
	this->_lastName = _getInfo("Enter last name:");
	this->_nickname = _getInfo("Enter nickname:");
	this->_phoneNumber = _getInfo("Enter phone number:");
	this->_darkestSecret = _getInfo("Enter darkest secret:");
	std::cout << "New contact has been added!\n";
}
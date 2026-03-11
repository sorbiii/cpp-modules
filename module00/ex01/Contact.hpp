#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		int _index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		
		std::string _getInfo(std::string message);
		bool _checkInfo(std::string input, std::string message);
		bool _blankLine(std::string input);
		bool _checkName(std::string input);
		std::string _makePrintable(std::string object);
	public:
		Contact();
		~Contact();
		bool checkNumber(std::string input);
		void setInfo();
		void setIndex(int index);
		void printContacts();
		void printFullContact();
};

#endif
#ifndef PHONEBOOK_CONTACT_CPP
#define PHONEBOOK_CONTACT_CPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <sstream>

class Contact
{
	private:
		int index;
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
		void printContacts();
		void printFullContact();
};

class PhoneBook
{
private:
	Contact _contacts[8];
	int _addedCount;
public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
};

#endif
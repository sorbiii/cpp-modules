#ifndef PHONEBOOK_CONTACT_HPP
#define PHONEBOOK_CONTACT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <sstream>
# include "Contact.hpp" 

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
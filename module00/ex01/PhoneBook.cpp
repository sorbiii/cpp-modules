#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _addedCount(0)
{
	;
}

PhoneBook::~PhoneBook()
{
	;
}

void PhoneBook::addContact()
{
	this->_contacts[this->_addedCount % 8].setInfo();
    this->_addedCount++;
}
void PhoneBook::searchContact()
{
	std::string input;
	int index;
	int limit;

	if (this->_addedCount > 8)
		limit = 8;
	else
		limit = this->_addedCount;
    if (limit == 0)
	{
        std::cout << "Nothing to show." << std::endl;
        return;
    }

    for (int i = 0; i < limit; i++)
	{
        //std::cout << "|" << std::setw(10) << i << "|"; 
        this->_contacts[i].printContacts();
    }
	while (true)
	{
		std::cout << "Enter an index: ";
		if (!std::getline(std::cin, input))
			exit(1);
		if (this->_contacts[0].checkNumber(input))
		{
			std::istringstream(input) >> index;
			if (index < 8 && index >= 0 && index < limit)
			{
    			this->_contacts[index].printFullContact();
    			break;
			}
			else
				std::cout << "Index out of bound!" << std::endl;
		}
	}

}
#include "PhoneBook.hpp"

int main(void)
{
	std::string s;
	PhoneBook phonebook;

	while (s != "exit" && s != "EXIT")
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT:\n";
		std::getline(std::cin, s);
		if (s == "ADD" || s == "add")
			phonebook.addContact();
		else if (s == "SEARCH" || s == "search")
			phonebook.searchContact();
		else if (s == "EXIT" || s == "exit")
			break;
		else
			continue;
	}
}

#include "Harl.hpp"

Harl::Harl()
{
	;
}

Harl::~Harl()
{
	;
}

void Harl::debug()
{
	std::cout << "[DEBUG]" << '\n';
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
}

void Harl::info()
{
	std::cout << "[INFO]" << '\n';
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << '\n';
}

void Harl::warning()
{
	std::cout << "[WARNING]" << '\n';
	std::cout <<  "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << '\n';
}

void Harl::error()
{
	std::cout << "[ERROR]" << '\n';
	std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';
}

void Harl::complain(std::string level)
{
	std::string names[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int cas = -1;
	for (int i = 0; i < 4; i++)
	{
		if (names[i] == level)
		{
			cas = i;
			break;
		}
	}

	switch (cas)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case 1:
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->warning();
			this->error();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << '\n';
			break;
	}
}
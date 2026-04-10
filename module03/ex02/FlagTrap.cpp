#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FlagTrap default constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other)
{
	std::cout << "FlagTrap copy constructor called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap &other)
{
	if (this != &other)
	{
		std::cout << "FlagTrap copy assigmrnt operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor called" << std::endl;
}

void FlagTrap::highFivesGuys()
{
	
}
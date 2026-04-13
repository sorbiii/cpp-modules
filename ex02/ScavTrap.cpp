#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		std::cout << "ScavTrap copy assigment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap dectructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " doesn't have any energy points :(" << std::endl;
		return;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " has no hit points left:(" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "Scav Trap " << this->_name << " attacks " << target 
		<< ", causing "<< this->_attackDamage << " point of damage!" << std::endl;
}
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		std::cout << "FragTrap copy assigment operator called" << std::endl;
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(std::string target)
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
	std::cout << "Frag Trap " << this->_name << " attacks " << target 
		<< ", causing "<< this->_attackDamage << " point of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " has no hit points left" << std::endl;
		return;
	}
	std::cout << "Frag Trap " << this-> _name << " requests a high five!" << std::endl;
}
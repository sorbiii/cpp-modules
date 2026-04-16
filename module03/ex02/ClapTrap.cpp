#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap " << this->_name << " copy assigment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "attack function: " << this->_name << " has no hit points left:(" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "attack function: " << this->_name << " doesn't have any energy points :(" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "Clap Trap " << this->_name << " attacks " << target 
		<< ", causing "<< this->_attackDamage << " point of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "takeDamage function: " << this->_name << " is already dead" << std::endl;
		return;
	}
	if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "Clap Trap takeDamge function: " << this->_name << " doesn't have enough hit points " << std::endl;
	}
	else
	{
		this-> _hitPoints -= amount;
		std::cout << "Clap Trap " << this->_name << " takes " << amount << " points of damage nad now has: "
		 	<< this->_hitPoints << " hit points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "beRepaired function: " << this->_name << " has no hit points left:(" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "beRepaired function: " << this->_name << " has no energy points left:(" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repairs " << amount <<
		" hit points back and now has " << this->_hitPoints << " hit points!" << std::endl;
}
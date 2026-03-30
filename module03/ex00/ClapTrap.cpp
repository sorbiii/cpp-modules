#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _attackDamage(0), _energyPoints(10), _hitPoints(10)
{
	;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _attackDamage(other._attackDamage),
		_energyPoints(other._energyPoints), _hitPoints(other._hitPoints)
{
	;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
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
	;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << this->_name << " doesn't have any energy points :(";
	if (this->_hitPoints == 0)
		std::cout << this->_name << "has no hit points left:(" << std::endl;
	this->_energyPoints--;
	std::cout << "Clap Trap " << this->_name << " attacks " << target 
		<< ", causing "<< this->_attackDamage << "point of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << this->_name << "has no energy points left:(" << std::endl;
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
	{
		this-> _hitPoints -= amount;
		std::cout << "Clap Trap" << this->_name << " takes " << amount << " points of damage nad now has: "
		 	<< this->_hitPoints << " hit points " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << this->_name << " has no energy points left:(" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repairs " << amount <<
		" hit points back and now has " << this->_hitPoints << " hit points!" << std::endl;
}
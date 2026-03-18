#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	this->_name = name;
}

HumanB::~HumanB()
{
	;
}

void HumanB::attack()
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << '\n'; 
	else
		std::cout << _name << " is unarmed" << '\n';
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
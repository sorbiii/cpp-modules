#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& value) : _weapon(value)
{
	this->_name = name;
}

HumanA::~HumanA()
{
	;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << '\n'; 
}
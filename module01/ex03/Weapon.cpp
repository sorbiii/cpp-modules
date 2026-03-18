#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	;
}

void Weapon::setType(std::string parameter)
{
	this->_type = parameter;
}

const std::string& Weapon::getType() const
{
	return _type;
}
#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
}

Zombie::~Zombie()
{
	std::cout << _name << " was destructed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
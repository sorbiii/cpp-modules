#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Rysiu")
{
	std::cout << "Wrong Animal " << this->_type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "Wrong Animal " << this->_type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->_type = other._type;
	std::cout << "Wrong Animal " << this->_type << " copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Wrong Animal " << this->_type << " copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal " << this->_type << " destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::setType(std::string name)
{
	this->_type = name;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal " << this->_type << " made a sound" << std::endl;
}
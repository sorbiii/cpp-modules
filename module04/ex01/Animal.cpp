#include "Animal.hpp"

Animal::Animal() : _type("Rysiu")
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
	std::cout << "Animal " << this->_type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal " << this->_type << " copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->_type << " destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::setType(std::string name)
{
	this->_type = name;
}

void Animal::makeSound() const
{
	std::cout << "Animal " << this->_type << " made a sound" << std::endl;
}
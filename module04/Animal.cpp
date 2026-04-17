#include "Animal.hpp"

Animal::Animal() : _type("Rysiu")
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->_type = other._type;
	*this = other; //?
	std::cout << "Animal " << this->_type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal " << this->_type << " copy assigment operator called" << std::endl;

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

void Animal::makeSound()
{
	std::cout << "Animal " << this->_type << " made a sound" << std::endl;
}
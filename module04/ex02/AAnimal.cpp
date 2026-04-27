#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Rysiu")
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string name) : _type(name)
{
	std::cout << "Animal " << this->_type << " default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	this->_type = other._type;
	std::cout << "Animal " << this->_type << " copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Animal " << this->_type << " copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal " << this->_type << " destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

void AAnimal::setType(std::string name)
{
	this->_type = name;
}

// void AAnimal::makeSound() const
// {
// 	std::cout << "Animal " << this->_type << " made a sound" << std::endl;
// }
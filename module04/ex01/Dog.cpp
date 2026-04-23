#include "Dog.hpp"

Dog::Dog() : Animal("Puppy")
{
	std::cout << "Puppy " << this->_type << " default constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	this->_type = name;
	std::cout << "Dog " << this->_type << " default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog " << this->_type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
	
	std::cout << "Dog " << this->_type << " copy assignment operator called" << std::endl; 
}

Dog::~Dog()
{
	std::cout << "Dog " << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << this->_type << " barked" << std::endl;
}
#include "Cat.hpp"

Cat::Cat() : Animal("Kitty")
{
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat " << this->_type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat " << this->_type << " copy assignment operator called" << std::endl; 
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->_type << " miaued" << std::endl;
}
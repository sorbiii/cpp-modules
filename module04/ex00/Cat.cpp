#include "Cat.hpp"

Cat::Cat() : Animal("Kitty")
{
	this->_type = "Kitty";
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	this->_type = name;
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat " << this->_type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;

	std::cout << "Cat " << this->_type << " copy assignment operator called" << std::endl; 
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->_type << " miaued" << std::endl;
}
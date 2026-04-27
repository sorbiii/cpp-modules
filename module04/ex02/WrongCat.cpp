#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Kitty")
{
	this->_type = "Wrong Kitty";
	std::cout << "Wrong Cat " << this->_type << " default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->_type = name;
	std::cout << "Wrong Cat " << this->_type << " default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Wrong Cat " << this->_type << " copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;

	std::cout << "Wrong Cat " << this->_type << " copy assignment operator called" << std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat " << this->_type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat " << this->_type << " miaued" << std::endl;
}
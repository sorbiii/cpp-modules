#include "Cat.hpp"

Cat::Cat() : AAnimal("Kitty")
{
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(std::string name) : AAnimal(name)
{
	this->_brain = new Brain();
	std::cout << "Cat " << this->_type << " default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	std::cout << "Cat " << this->_type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat " << this->_type << " copy assignment operator called" << std::endl; 
	if (this != &other)
	{
		this->_type = other._type;
		Brain* temp = new Brain(*other._brain);
		delete this->_brain;
		this->_brain = temp;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->_type << " destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->_type << " miaued" << std::endl;
}
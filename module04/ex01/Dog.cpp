#include "Dog.hpp"

Dog::Dog() : Animal("Puppy")
{
	std::cout << "Dog " << this->_type << " default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string name) : Animal(name)
{
	this->_brain = new Brain();
	std::cout << "Dog " << this->_type << " default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog " << this->_type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog " << this->_type << " copy assignment operator called" << std::endl; 
	if (this != &other)
	{
		this->_type = other._type;
		Brain* temp = new Brain(*other._brain);
		delete this->_brain;
		this->_brain = temp;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->_type << " destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << this->_type << " barked" << std::endl;
}
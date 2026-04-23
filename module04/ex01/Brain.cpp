#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::copy(std::begin(_ideas), std::end(_ideas), std::begin(other._ideas));
}

Brain& Brain::operator=(const Brain &other)
{
	
}
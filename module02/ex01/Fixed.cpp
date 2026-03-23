	#include "Fixed.hpp"

Fixed::Fixed(): _bitValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed& Fixed::operator=(const Fixed &value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		this->_bitValue = value.getRawBits();
	return *this;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_bitValue = value;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_bitValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "Get Raw Bits function called" << std::endl;
	return (this->_bitValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_bitValue = raw;
}

int Fixed::toInt(void) const
{
	return this-> _bitValue >> this->_fractionalBits;
}

float Fixed::toFloat(void) const
{
	return (float)this->_bitValue / (1 << this->_fractionalBits);
}
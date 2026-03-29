#include "Point.hpp"

Point::Point()
{
	this->_x = Fixed(0);
	this->_y = Fixed(0);
};

Point::Point(const float x, const float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::Point(const Point& other)
{
	*this = other;
}

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
		this->_x = other._x;
		this->_y = other._y;
	}
	return (*this);
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}

Point::~Point()
{
	
};
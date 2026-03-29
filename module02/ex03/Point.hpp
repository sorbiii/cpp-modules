#ifndef POINT_HPP
#define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point(); //x i y na 0
		Point(const float x, const float y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed cross(Point const v, Point const w, Point const point);

#endif
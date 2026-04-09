#include "Point.hpp"

bool isTriangle(Point const a, Point const b, Point const c)
{
	
}

Fixed cross(Point const v, Point const w, Point const point) // bedzie zwracać d - zoabczyc na czym polega ten wzór
{
	Fixed result;
	result = (point.getX() - w.getX()) * (v.getY() - w.getY()) 
	- (v.getX() - w.getX()) * (point.getY() - w.getY());
	return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed ab;
	Fixed bc;
	Fixed ca;

	ab = cross(a, b, point);
	bc = cross(b, c, point);
	ca = cross(c, a, point);

	if ((ab < 0 && bc < 0 && ca < 0) || (ab > 0 && bc > 0 && ca > 0))
		return true;
	else
		return false;
}
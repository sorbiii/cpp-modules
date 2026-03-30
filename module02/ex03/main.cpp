#include "Point.hpp"

int main(void)
{
	bool result;
	Point a(0.0f, 0.0f);
	Point b(4.0f, 0.0f);
	Point c(0.0f, 4.0f);
	Point point(1.0f, 1.0f);

	result = bsp(a, b, c, point);
	if (result)
		std::cout << "this point is inside the triangle:)" << std::endl;
	else
		std::cout << "this point isn't inside the triangle:(" << std::endl; 
	
	return 0;
}
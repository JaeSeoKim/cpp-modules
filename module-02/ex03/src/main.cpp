#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(10), Fixed(0));
	Point c(Fixed(10), Fixed(10));

	std::cout << bsp(a, b, c, Point(Fixed(9), Fixed(9))) << std::endl;
	return 0;
}

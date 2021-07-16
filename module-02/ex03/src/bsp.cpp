#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

inline float sign(Point p1, Point p2, Point p3)
{
	return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	float d1 = sign(p, a, b);
	float d2 = sign(p, b, c);
	float d3 = sign(p, c, a);

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}

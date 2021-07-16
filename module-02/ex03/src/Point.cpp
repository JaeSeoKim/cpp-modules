#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0){};

Point::Point(Fixed const &x, Fixed const &y) : x(x), y(y){};

Point::Point(Point const &other)
{
	*this = other;
};

Point &Point::operator=(Point const &other)
{
	(Fixed) this->x = (Fixed)other.x;
	(Fixed) this->y = (Fixed)other.y;
	return (*this);
}

bool Point::operator==(Point const &other) const
{
	if ((Fixed)this->x == other.x && (Fixed)this->y == other.y)
		return (true);
	return (false);
}

Fixed const &Point::getX() const
{
	return (this->x);
}
Fixed const &Point::getY() const
{
	return (this->y);
}

Point::~Point()
{
}

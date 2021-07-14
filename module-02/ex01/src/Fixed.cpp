#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int value)
{
	this->value = value << this->fractionalBits;
}

Fixed::Fixed(float value)
{
	this->value = (int)roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

int Fixed::toInt(void) const
{
	return (this->value >> this->fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

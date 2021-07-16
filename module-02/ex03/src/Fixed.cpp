#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed::Fixed(void)
{
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
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->value = other.value;
	return (*this);
}

bool Fixed::operator<(const Fixed &b)
{
	return (this->value < b.value);
}
bool Fixed::operator>(const Fixed &b)
{
	return (this->value > b.value);
}
bool Fixed::operator<=(const Fixed &b)
{
	return (this->value <= b.value);
}
bool Fixed::operator>=(const Fixed &b)
{
	return (this->value >= b.value);
}
bool Fixed::operator==(const Fixed &b)
{
	return (this->value == b.value);
}
bool Fixed::operator!=(const Fixed &b)
{
	return (this->value != b.value);
}

Fixed Fixed::operator+(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value + b.value);
	return (result);
}
Fixed Fixed::operator-(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value - b.value);
	return (result);
}
Fixed Fixed::operator*(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value * b.value / (1 << this->fractionalBits));
	return (result);
}
Fixed Fixed::operator/(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value / b.value * (1 << this->fractionalBits));
	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->value += 1;
	return (temp);
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->value -= 1;
	return (temp);
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
	return (this->value);
}

void Fixed::setRawBits(int raw)
{
	this->value = raw;
}

Fixed::~Fixed(void)
{
}

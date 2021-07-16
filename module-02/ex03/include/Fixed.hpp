#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed(void);
	Fixed(int value);
	Fixed(float value);

	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);
	// Comparison operator
	bool operator<(const Fixed &b);
	bool operator>(const Fixed &b);
	bool operator<=(const Fixed &b);
	bool operator>=(const Fixed &b);
	bool operator==(const Fixed &b);
	bool operator!=(const Fixed &b);
	// Arithmetic operators
	Fixed operator+(const Fixed &b);
	Fixed operator-(const Fixed &b);
	Fixed operator*(const Fixed &b);
	Fixed operator/(const Fixed &b);
	// Increment and decrement operators
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	// Conversion operators
	int toInt(void) const;
	float toFloat(void) const;

	// getters and setters
	int getRawBits(void) const;
	void setRawBits(const int raw);

	~Fixed();

	// static methods
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif // FIXED_HPP

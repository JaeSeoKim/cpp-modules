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

	int toInt(void) const;
	float toFloat(void) const;

	int getRawBits(void) const;
	void setRawBits(const int raw);

	~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif // FIXED_HPP

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

	Fixed(const Fixed &other);

	Fixed &operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(const int raw);

	~Fixed();
};

#endif // FIXED_HPP

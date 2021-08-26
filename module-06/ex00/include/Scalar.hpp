#if !defined(SCALAR_HPP)
#define SCALAR_HPP

#include <iostream>
#include <string>

class Scalar
{
private:
	const std::string value;
	Scalar() : value("error"){};

public:
	Scalar(std::string const &value) : value(value){};
	~Scalar(){};
	std::string const &getValue() const;
	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

	class ImpossibleException : public std::exception
	{
		const char *what() const throw()
		{
			return "impossible";
		}
	};
	class NonDisplayableException : public std::exception
	{
		const char *what() const throw()
		{
			return "Non displayable";
		}
	};
};

std::ostream &operator<<(std::ostream &os, Scalar const &scalar);

#endif // SCALAR_HPP

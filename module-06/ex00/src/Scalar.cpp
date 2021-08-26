#include "Scalar.hpp"
#include <cmath>

std::string const &Scalar::getValue() const
{
	return (this->value);
}

char Scalar::toChar() const
{
	int n;

	try
	{
		n = std::stoi(this->value);
		if (n < 0 || n > 255)
		{
			throw Scalar::ImpossibleException();
		}
	}
	catch (...)
	{
		throw Scalar::ImpossibleException();
	}
	if (!isprint(n))
	{
		throw Scalar::NonDisplayableException();
	}
	return (static_cast<char>(n));
}

int Scalar::toInt() const
{
	int n;

	try
	{
		n = std::stoi(this->value);
	}
	catch (...)
	{
		throw Scalar::ImpossibleException();
	}
	return (n);
}

float Scalar::toFloat() const
{
	float f;

	try
	{
		f = std::stof(this->value);
	}
	catch (...)
	{
		throw Scalar::ImpossibleException();
	}
	return (f);
}

double Scalar::toDouble() const
{
	float d;

	try
	{
		d = std::stod(this->value);
	}
	catch (...)
	{
		throw Scalar::ImpossibleException();
	}
	return (d);
}

std::ostream &operator<<(std::ostream &os, const Scalar &scalar)
{
	os << "char: ";
	try
	{
		char c = scalar.toChar();
		os << "'" << c << "'" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "int: ";
	try
	{
		os << scalar.toInt() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "float: ";
	try
	{
		float f = scalar.toFloat();

		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
			os << ".0";
		os << "f" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "Double: ";
	try
	{
		double d = scalar.toDouble();

		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}
	return (os);
}

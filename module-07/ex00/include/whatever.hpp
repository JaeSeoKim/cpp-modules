#if !defined(WHATEVER_HPP)
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
T &max(T &a, T &b)
{
	return (a > b) ? a : b;
}

class Something
{
private:
	int value;

public:
	Something(int const &value)
	{
		this->value = value;
	};
	Something(Something const &other)
	{
		*this = other;
	}
	Something &operator=(Something const &other)
	{
		if (this != &other)
		{
			this->value = other.value;
		}
		return *this;
	}
	~Something(){};

	bool operator<(Something const &other) const
	{
		return (this->value < other.value);
	}
	bool operator>(Something const &other) const
	{
		return (this->value > other.value);
	}
	int getValue() const
	{
		return this->value;
	};
};

std::ostream &operator<<(std::ostream &os, Something const &something)
{
	os << something.getValue();
	return os;
}

#endif // WHATEVER_HPP

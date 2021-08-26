#if !defined(B_HPP)
#define B_HPP

#include "Base.hpp"

class B : public Base
{
private:
public:
	B(){};
	B(B const &other)
	{
		*this = other;
	};
	B &operator=(B const &other)
	{
		if (this != &other)
		{
			Base::operator=(other);
		}
		return *this;
	};
	~B(){};
};

#endif // B_HPP

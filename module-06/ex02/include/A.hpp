#if !defined(A_HPP)
#define A_HPP

#include "Base.hpp"

class A : public Base
{
private:
public:
	A(){};
	A(A const &other)
	{
		*this = other;
	};
	A &operator=(A const &other)
	{
		if (this != &other)
		{
			Base::operator=(other);
		}
		return *this;
	};
	~A(){};
};

#endif // A_HPP

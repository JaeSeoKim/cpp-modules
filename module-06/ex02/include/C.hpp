#if !defined(C_HPP)
#define C_HPP

#include "Base.hpp"

class C : public Base
{
private:
public:
	C(){};
	C(C const &other)
	{
		*this = other;
	};
	C &operator=(C const &other)
	{
		if (this != &other)
		{
			Base::operator=(other);
		}
		return *this;
	};
	~C(){};
};

#endif // C_HPP

#if !defined(BASE_HPP)
#define BASE_HPP

class Base
{
private:
public:
	Base(){};
	Base(Base const &other)
	{
		*this = other;
	};
	Base &operator=(Base const &other)
	{
		if (this != &other)
		{
			/* Do Something*/
		}
		return *this;
	};
	virtual ~Base(){};
};

#endif // BASE_HPP

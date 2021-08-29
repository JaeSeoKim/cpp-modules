#if !defined(ITER_HPP)
#define ITER_HPP

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

template <typename T>
void iter(T *lst, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		f(lst[i]);
	}
}

#endif // ITER_HPP

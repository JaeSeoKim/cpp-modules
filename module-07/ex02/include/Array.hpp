#if !defined(ARRAY_HPP)
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;

public:
	Array()
	{
		_size = 0;
		array = new T[0];
	};
	Array(unsigned int n)
	{
		array = new T[n];
		_size = n;
	};
	Array(const Array &other)
	{
		this->array = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			this->array[i] = other[i];
	};
	Array<T> &operator=(const Array &other)
	{
		if (this != &other)
		{
			this->~Array();
			this->_size = other.size();
			this->array = new T[other.size()];
			for (unsigned int i = 0; i < other.size(); i++)
			{
				this->array[i] = other[i];
			}
		}
		return *this;
	};
	T operator[](int i) const
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
			throw Array::OutOfRangeException();
		return this->array[i];
	};
	T &operator[](int i)
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
			throw Array::OutOfRangeException();
		return this->array[i];
	};
	~Array()
	{
		delete[] this->array;
	};

	T *getArray() const
	{
		return this->array;
	};

	unsigned int size() const
	{
		return this->_size;
	}

	class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};
};

#endif // ARRAY_HPP

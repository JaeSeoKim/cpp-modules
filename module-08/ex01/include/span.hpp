#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _values;
	Span();

public:
	Span(unsigned int n);
	Span(Span const &other);
	Span &operator=(Span const &other);
	int &operator[](int i);
	~Span();

	unsigned int size() const;
	std::vector<int> const &getValues() const;

	void addNumber(int n);
	void addNumber(std::vector<int>::iterator const &, std::vector<int>::iterator const &);
	long shortestSpan() const;
	long longestSpan() const;

	class OutOfRangeException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Out of range");
		}
	};
	class FullException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Buffer is already full");
		}
	};
	class CantSearchException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Can't search");
		}
	};
};

#endif // SPAN_HPP

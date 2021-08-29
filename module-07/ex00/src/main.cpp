#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
	int a = 42;
	int b = 0;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "swap(a, b)" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;

	char a_char = 'a';
	char b_char = 'b';

	std::cout << "a_char = " << a_char << std::endl;
	std::cout << "b_char = " << b_char << std::endl;

	std::cout << "swap(a_char, b_char)" << std::endl;
	swap(a_char, b_char);
	std::cout << "a_char = " << a_char << std::endl;
	std::cout << "b_char = " << b_char << std::endl;

	std::cout << "max(a_char, b_char) = " << max(a_char, b_char) << std::endl;
	std::cout << "min(a_char, b_char) = " << min(a_char, b_char) << std::endl;

	Something a_something(12345);
	Something b_something(54321);

	std::cout << "a_something = " << a_something.getValue() << std::endl;
	std::cout << "b_something = " << b_something.getValue() << std::endl;

	std::cout << "swap(a_something, b_something)" << std::endl;
	swap(a_something, b_something);
	std::cout << "a_something = " << a_something.getValue() << std::endl;
	std::cout << "b_something = " << b_something.getValue() << std::endl;

	std::cout << "max(a_something, b_something) = " << max(a_something, b_something) << std::endl;
	std::cout << "min(a_something, b_something) = " << min(a_something, b_something) << std::endl;

	return (0);
}

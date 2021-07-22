#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("jaeskim", 10);

	try
	{
		b.increaseGrade(9);
		std::cout << b << std::endl;
		b.increaseGrade(1);
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		b.decreaseGrade(140);
		std::cout << b << std::endl;
		b.decreaseGrade(10);
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

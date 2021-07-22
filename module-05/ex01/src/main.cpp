#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat jaeskim("jaeskim", 10);

	try
	{
		jaeskim.increaseGrade(9);
		std::cout << jaeskim << std::endl;
		jaeskim.increaseGrade(1);
		std::cout << jaeskim << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form formA("a", 10, 10);
	Form formB("b", 10, 10);
	jaeskim.signForm(formA);
	jaeskim.decreaseGrade(10);
	jaeskim.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;
}

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void do_beSigned(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
void do_action(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		std::cout << form << std::endl;
		form.action(bureaucrat);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "try beSigned by wrong" << std::endl;
	do_beSigned(form, wrong);

	std::cout << "try action with not signed form" << std::endl;
	do_action(form, correct);

	std::cout << "try beSigned by correct" << std::endl;
	do_beSigned(form, correct);

	std::cout << "try action with signed form by wrong" << std::endl;
	do_action(form, wrong);

	std::cout << "try action with signed form by correct" << std::endl;
	do_action(form, correct);
}

int main()
{
	srand(time(NULL));

	Bureaucrat jaeskim("jaeskim", 10);
	Bureaucrat wrong("wrong", 150);

	ShrubberyCreationForm form1("target");
	RobotomyRequestForm form2("target");
	PresidentialPardonForm form3("target");
	test_form(form1, jaeskim, wrong);
	test_form(form2, jaeskim, wrong);
	test_form(form3, jaeskim, wrong);

	return 0;
}

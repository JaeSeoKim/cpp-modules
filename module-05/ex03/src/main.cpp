#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	srand(time(NULL));

	Bureaucrat jaeskim("jaeskim", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;

	Form *form;

	form = intern.makeForm("ShrubberyCreationForm", "target");
	test_form(*form, jaeskim, wrong);
	delete form;
	form = intern.makeForm("RobotomyRequestForm", "target");
	test_form(*form, jaeskim, wrong);
	delete form;
	form = intern.makeForm("PresidentialPardonForm", "target");
	test_form(*form, jaeskim, wrong);
	delete form;

	try
	{
		form = intern.makeForm("WrongName", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef Form *Fn;

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	const std::string formNames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form *(*forms[3])(std::string const &target) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create};

	for (int i = 0; i < 3; ++i)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i](target);
		}
	}
	throw Intern::NotKnownFormException();
}

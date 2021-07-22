#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, "ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->Form::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat const &executer) const
{
	this->Form::execute(executer);
	std::ofstream file(this->getTarget() + "_shrubbery");

	if (file.is_open() == false)
		throw std::ofstream::failure("Could not open file " + this->getTarget() + "_shrubbery");
	file << TREE_ASCII_ART;
}

Form *ShrubberyCreationForm::create(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

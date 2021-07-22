#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, "RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->Form::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action(Bureaucrat const &executer) const
{
	this->Form::execute(executer);
	std::cout << "\a";

	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " is a robot!\n";
	else
		std::cout << this->getTarget() << " is human!\n";
}

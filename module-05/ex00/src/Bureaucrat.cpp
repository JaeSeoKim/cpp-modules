#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increaseGrade(int amount)
{
	if (this->grade - amount <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade - amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;
}

void Bureaucrat::decreaseGrade(int amount)
{
	if (this->grade + amount <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

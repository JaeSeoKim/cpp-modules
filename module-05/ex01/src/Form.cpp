#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
}

Form::Form(Form const &other) : name(other.getName()), signGrade(other.getSignGrade()), execGrade(other.getExecGrade())
{
	this->sign = other.sign;
}

Form &Form::operator=(Form const &other)
{
	this->sign = other.sign;
	return (*this);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->execGrade)
		throw Form::GradeTooLowException();
	this->sign = true;
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecGrade() const
{
	return (this->execGrade);
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "< " << form.getName() << " sign : " << form.getSignGrade() << ", exec : " << form.getExecGrade();
	if (form.getSign())
		os << ", signed";
	else
		os << ", not signed";
	os << " >";
	return (os);
}

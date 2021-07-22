#if !defined(FORM_HPP)
#define FORM_HPP

#include <iostream>
#include <fstream>

class Bureaucrat;

class Form
{
private:
	const std::string target;
	const std::string name;
	bool sign;
	const int signGrade;
	const int execGrade;
	Form() : target(""), name(""), signGrade(42), execGrade(42){};

public:
	Form(std::string const &target, std::string const &name, int signGrade, int execGrade);
	Form(Form const &other);
	Form &operator=(Form const &other);
	virtual ~Form();

	std::string getTarget() const;
	std::string getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(Bureaucrat const &bureaucrat);

	void execute(Bureaucrat const &executor) const;

	virtual void action(Bureaucrat const &executor) const = 0;

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade too low");
		}
	};

	class NotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Not signed");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif // FORM_HPP

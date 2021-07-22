#if !defined(FORM_HPP)
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool sign;
	const int signGrade;
	const int execGrade;
	Form() : name(""), signGrade(42), execGrade(42){};

public:
	Form(std::string const &name, int signGrade, int execGrade);
	Form(Form const &other);
	Form &operator=(Form const &other);
	~Form();

	std::string getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(Bureaucrat const &bureaucrat);

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Permission denied: Grade too low");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif // FORM_HPP

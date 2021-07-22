#if !defined(BURECRAT_HPP)
#define BURECRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

	Bureaucrat() : name(""){};

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat &operator=(Bureaucrat const &other);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void increaseGrade(int amount);
	void decreaseGrade(int amount);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade too low");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif // BURECRAT_HPP

#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm() : Form("", "", 42, 42){};

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	void action(Bureaucrat const &executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP

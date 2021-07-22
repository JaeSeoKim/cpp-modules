#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm() : Form("", "", 42, 42){};

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	void action(Bureaucrat const &executor) const;

	static Form *create(std::string const &target);
};

#endif // PRESIDENTIALPARDONFORM_HPP

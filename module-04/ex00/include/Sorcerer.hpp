#if !defined(SOCERER_HPP)
#define SOCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer();

public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(const Sorcerer &other);

	Sorcerer &operator=(const Sorcerer &other);

	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const &target) const;

	~Sorcerer();
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif // SOCERER_HPP

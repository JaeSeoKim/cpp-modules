#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string const &name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	this->name = name;
}
Victim::Victim(Victim const &victim)
{
	*this = victim;
}

Victim &Victim::operator=(Victim const &other)
{
	if (this != &other)
		this->name = other.name;
	return (*this);
}

std::string const &Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (os);
}

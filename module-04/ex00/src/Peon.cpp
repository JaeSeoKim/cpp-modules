#include <iostream>
#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon() : Victim("noName")
{
}
Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other)
{
}

Peon &Peon::operator=(Peon const &other)
{
	Victim::operator=(other);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

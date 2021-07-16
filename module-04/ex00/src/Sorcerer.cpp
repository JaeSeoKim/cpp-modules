#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	this->name = name;
	this->title = title;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	*this = other;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->title = other.title;
	}
	return (*this);
}

std::string Sorcerer::getName() const
{
	return this->name;
}

std::string Sorcerer::getTitle() const
{
	return this->title;
}

void Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}

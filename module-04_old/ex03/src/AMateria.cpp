#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(AMateria const &other)
{
	this->_type = other._type;
	this->_xp = other._xp;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_xp = other._xp;
	}
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &)
{
	this->_xp += 10;
}

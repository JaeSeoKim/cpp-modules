#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
}

Character::Character(Character const &other)
{
	this->_name = other.getName();
	for (int i = 0; i < 4; ++i)
	{
		AMateria const *tmp = other.getMateria(i);
		if (tmp != NULL)
			this->_materia[i] = tmp->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->~Character();

		this->_name = other.getName();
		for (int i = 0; i < 4; ++i)
		{
			AMateria const *tmp = other.getMateria(i);
			if (tmp != NULL)
				this->_materia[i] = tmp->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria const *Character::getMateria(int index) const
{
	return (this->_materia[index]);
}

void Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return;
	if (this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
}

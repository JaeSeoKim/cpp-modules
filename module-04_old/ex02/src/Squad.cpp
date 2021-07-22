#include <iostream>
#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->members = new ISpaceMarine *[this->count];
}

Squad::Squad(Squad const &other)
{
	this->count = other.count;
	this->members = new ISpaceMarine *[this->count];
	for (int i = 0; i < this->count; ++i)
		this->members[i] = other.members[i]->clone();
}

Squad &Squad::operator=(Squad const &other)
{
	if (this != &other)
	{
		this->~Squad();

		this->count = other.count;
		this->members = new ISpaceMarine *[this->count];
		for (int i = 0; i < this->count; ++i)
			this->members[i] = other.members[i]->clone();
	}
	return (*this);
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (index < 0 || index >= this->count)
	{
		std::cout << "Index out of bounds" << std::endl;
		return (nullptr);
	}
	return (this->members[index]);
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	ISpaceMarine **tmp;

	if (spaceMarine == NULL)
		return (this->count);
	for (int i = 0; i < this->count; ++i)
	{
		if (this->members[i] == spaceMarine)
			return (this->count);
	}
	tmp = new ISpaceMarine *[this->count + 1];
	for (int i = 0; i < this->count; ++i)
	{
		tmp[i] = this->members[i];
	}
	tmp[this->count] = spaceMarine;
	delete[] this->members;
	this->members = tmp;
	++this->count;
	return (this->count);
}

Squad::~Squad()
{
	for (int i = 0; i < this->count; ++i)
		delete this->members[i];
	delete[] this->members;
}

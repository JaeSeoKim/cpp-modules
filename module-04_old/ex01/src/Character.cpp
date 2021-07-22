#include <iostream>
#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->ap = other.ap;
		this->weapon = other.weapon;
	}
	return (*this);
}

int Character::getAP() const
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

void Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->weapon != NULL && this->ap >= this->weapon->getAPCost())
	{
		std::cout << this->name << " attacks " << enemy->getType()
				  << " with a " << this->weapon->getName() << std::endl;
		this->ap -= this->weapon->getAPCost();
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

Character::~Character()
{
}

std::ostream &operator<<(std::ostream &os, Character const &character)
{
	os << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon() != NULL)
		os << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}

#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->apcost = other.apcost;
		this->damage = other.damage;
	}
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string const &AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}

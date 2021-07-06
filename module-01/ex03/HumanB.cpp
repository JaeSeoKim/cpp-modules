#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
}

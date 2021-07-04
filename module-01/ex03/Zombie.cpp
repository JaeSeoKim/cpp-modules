#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->type = "None";
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setZombieType(std::string type)
{
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> is dead... ⚰️" << std::endl;
}

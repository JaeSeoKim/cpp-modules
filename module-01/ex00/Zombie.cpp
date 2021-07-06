#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> is dead... ⚰️" << std::endl;
}

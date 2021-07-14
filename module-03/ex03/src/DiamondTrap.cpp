#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "🤖 FragTrap(void)" << std::endl;
}
DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "🤖 FragTrap(" << name << ")" << std::endl;
	this->name = name;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

void DiamondTrap::whoAmI()
{
	std::cout << "😜 My name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "⚰️ DiamondTrap(" << this->name << ") was destroyed!" << std::endl;
}

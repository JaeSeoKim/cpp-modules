#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "🤖 FragTrap(void)" << std::endl;
	this->name = "default";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}
DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
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

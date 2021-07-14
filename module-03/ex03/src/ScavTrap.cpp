#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "🐶 ScavTrap(void)" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "🐶 ScavTrap(" << name << ")" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "🛡 Gate keeper mode!!!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "☠️ ScavTrap(" << this->getName() << ") was destroyed!" << std::endl;
}

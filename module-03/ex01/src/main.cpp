#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap jaeskim("jaeskim");

	jaeskim.attack("Somting!");
	jaeskim.takeDamage(100);
	jaeskim.beRepaired(3);
	jaeskim.guardGate();
}

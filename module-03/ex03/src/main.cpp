#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap jaeskim("jaeskim");

	jaeskim.attack("Somting!");
	jaeskim.takeDamage(100);
	jaeskim.beRepaired(3);
	jaeskim.highFivesGuys();
	jaeskim.guardGate();
	jaeskim.whoAmI();
}

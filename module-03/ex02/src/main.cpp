#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap jaeskim("jaeskim");

	jaeskim.attack("Somting!");
	jaeskim.takeDamage(100);
	jaeskim.beRepaired(3);
	jaeskim.highFivesGuys();
}

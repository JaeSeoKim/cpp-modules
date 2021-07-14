#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap jaeskim("jaeskim");

	jaeskim.attack("Somting!");
	jaeskim.takeDamage(100);
	jaeskim.beRepaired(3);
}

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "🤖 FragTrap(void)" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "🤖 FragTrap(" << name << ")" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "✋ highFivesGuys ✋" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "☠️ FragTrap(" << this->getName() << ") was destroyed!" << std::endl;
}

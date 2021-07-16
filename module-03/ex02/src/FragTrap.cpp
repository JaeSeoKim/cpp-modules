#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "🤖 FragTrap(void)" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "🤖 FragTrap(" << name << ")" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::attack(target);
}
void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::takeDamage(amount);
}
void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::beRepaired(amount);
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "✋ highFivesGuys ✋" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "☠️ FragTrap(" << this->getName() << ") was destroyed!" << std::endl;
}

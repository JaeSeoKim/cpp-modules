#if !defined(DIAMONDTRAP_HPP)
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string const &name);

	DiamondTrap(DiamondTrap const &other);

	DiamondTrap &operator=(DiamondTrap const &other);

	void attack(std::string const &target);

	void whoAmI();

	~DiamondTrap();
};

#endif // DIAMONDTRAP_HPP

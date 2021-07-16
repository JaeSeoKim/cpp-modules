#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);

	FragTrap &operator=(FragTrap const &other);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys();

	~FragTrap();
};

#endif // FRAGTRAP_HPP

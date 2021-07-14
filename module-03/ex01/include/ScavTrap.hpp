#if !defined(SCAVTRAP)
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);

	ScavTrap &operator=(ScavTrap const &other);

	void guardGate();

	~ScavTrap();
};

#endif // SCAVTRAP

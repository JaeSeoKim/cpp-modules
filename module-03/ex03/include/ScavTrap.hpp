#if !defined(SCAVTRAP)
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);

	ScavTrap &operator=(ScavTrap const &other);

	void guardGate();

	~ScavTrap();
};

#endif // SCAVTRAP

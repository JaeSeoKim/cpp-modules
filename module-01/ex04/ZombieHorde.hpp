#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *zombies;
	ZombieHorde();

public:
	ZombieHorde(int n);
	~ZombieHorde();
};

#endif

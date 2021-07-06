#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));

	this->zombies = new Zombie[n];
	for (int i = 0; i < n; ++i)
		this->zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

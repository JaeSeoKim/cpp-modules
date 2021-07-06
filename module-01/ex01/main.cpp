#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(42, "Hello");
	delete[] zombies;
	return (0);
}

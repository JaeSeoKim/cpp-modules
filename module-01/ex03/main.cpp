#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Zombie noneZombie = Zombie("NONE!");
	noneZombie.announce();

	Zombie *newZombie = ZombieEvent::newZombie("NEW ZOMBIE!!");
	newZombie->announce();
	delete newZombie;

	for (int i = 0; i < 42; ++i)
		delete ZombieEvent::randomChump();

	return (0);
}

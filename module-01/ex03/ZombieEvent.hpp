#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	/* data */
public:
	ZombieEvent(void);
	static Zombie *newZombie(std::string name);
	static Zombie *randomChump(void);
	~ZombieEvent();
};

#endif

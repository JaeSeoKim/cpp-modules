#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
	Zombie();

public:
	Zombie(std::string name);
	void announce(void);
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
	/* None */
public:
	std::string name;

	Zombie();
	Zombie(std::string name);
	void announce(void);
	~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif

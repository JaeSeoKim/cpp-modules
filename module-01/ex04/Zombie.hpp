#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	Zombie();
	void setZombieType(std::string type);
	void announce(void);
	~Zombie();
};

#endif

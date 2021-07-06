#if !defined(HUMANB_HPP)
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;

	HumanB();

public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif // HUMANB_HPP

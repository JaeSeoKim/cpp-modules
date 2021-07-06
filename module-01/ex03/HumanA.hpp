#if !defined(HUMANA_HPP)
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;

	HumanA();

public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	~HumanA();
};

#endif // HUMANA_HPP

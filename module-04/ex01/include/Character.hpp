#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;

	Character(){};

public:
	Character(std::string const &name);
	Character(Character const &other);
	Character &operator=(Character const &other);
	int getAP() const;
	AWeapon *getWeapon() const;
	~Character();
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const &getName() const;
};

std::ostream &operator<<(std::ostream &os, Character const &character);

#endif // CHARACTER_HPP

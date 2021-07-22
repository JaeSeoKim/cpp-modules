#if !defined(AWAEPONE_HPP)
#define AWAEPONE_HPP

#include <iostream>

class AWeapon
{
private:
	AWeapon(){};

protected:
	std::string name;
	int damage;
	int apcost;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &other);
	AWeapon &operator=(AWeapon const &other);
	virtual ~AWeapon();
	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif // AWAEPONE_HPP

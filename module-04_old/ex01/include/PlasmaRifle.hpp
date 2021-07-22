#if !defined(PLASMARIFLE_HPP)
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	~PlasmaRifle();

	void attack() const;
};

#endif // PLASMARIFLE_HPP

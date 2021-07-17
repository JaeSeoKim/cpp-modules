#if !defined(POWERFIST_HPP)
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	~PowerFist();

	void attack() const;
};

#endif // POWERFIST_HPP

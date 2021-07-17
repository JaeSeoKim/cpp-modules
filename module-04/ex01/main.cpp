#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Enemy.hpp"
#include "Character.hpp"

int main()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	Enemy *c = new SuperMutant();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	for (int i = 0; i < 4; ++i)
	{
		me->recoverAP();
		me->attack(c);
	}
	return 0;
}

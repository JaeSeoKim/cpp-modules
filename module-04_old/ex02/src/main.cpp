#include <iostream>
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		ISquad *vlc = new Squad;

		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		Squad vlc2((Squad &)(*vlc));
		Squad vlc3((Squad &)(*vlc));
		vlc2 = vlc3;
		delete vlc;
	}
	{
		system("leaks This_code_is_unclean.PURIFY_IT");
	}
	return 0;
}

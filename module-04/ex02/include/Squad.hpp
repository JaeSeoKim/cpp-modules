#if !defined(SQUAD_HPP)
#define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine **members;

public:
	Squad();
	Squad(Squad const &other);
	Squad &operator=(Squad const &other);
	int getCount() const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine *spaceMarine);
	~Squad();
};

#endif // SQUAD_HPP

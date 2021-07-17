#if !defined(SUPERMUTANT_CPP)
#define SUPERMUTANT_CPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	SuperMutant(SuperMutant const &other);
	SuperMutant &operator=(SuperMutant const &other);
	~SuperMutant();

	void takeDamage(int damage);
};

#endif // SUPERMUTANT_CPP

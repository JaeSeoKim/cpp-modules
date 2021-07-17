#if !defined(RADSCORPION_HPP)
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	RadScorpion(RadScorpion const &other);
	RadScorpion &operator=(RadScorpion const &other);
	~RadScorpion();

	void takeDamage(int damage);
};

#endif // RADSCORPION_HPP

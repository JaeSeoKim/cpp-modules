#if !defined(TACTICALMARINE_HPP)
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &other);
	TacticalMarine &operator=(const TacticalMarine &other);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	~TacticalMarine();
};

#endif // TACTICALMARINE_HPP

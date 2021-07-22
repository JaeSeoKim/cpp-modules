#if !defined(ASSAULTTERMINATOR_HPP)
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &other);
	AssaultTerminator &operator=(const AssaultTerminator &);

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	~AssaultTerminator();
};

#endif // ASSAULTTERMINATOR_HPP

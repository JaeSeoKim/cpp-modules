#if !defined(CURE_HPP)
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(Cure const &other);
	Cure &operator=(Cure const &other);
	~Cure();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif // CURE_HPP

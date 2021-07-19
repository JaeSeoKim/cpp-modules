#if !defined(ICE_HPP)
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice();
	Ice(Ice const &other);
	Ice &operator=(Ice const &other);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif // ICE_HPP

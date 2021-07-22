#if !defined(PEON_HPP)
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(std::string const &name);
	Peon(Peon const &other);

	void getPolymorphed() const;

	Peon &operator=(Peon const &other);

	~Peon();
};

#endif // PEON_HPP

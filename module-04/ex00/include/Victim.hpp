#if !defined(VICTIM_HPP)
#define VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string name;

	Victim();

public:
	Victim(std::string const &name);
	Victim(const Victim &other);

	Victim &operator=(const Victim &other);

	std::string const &getName() const;
	virtual void getPolymorphed() const;

	~Victim();
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif // VICTIM_HPP

#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);
	~Brain();

	std::string const &getIdea(int index) const;
};

#endif // BRAIN_HPP

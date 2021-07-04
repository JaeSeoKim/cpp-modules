#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
private:
	std::string name;
	Pony();

public:
	Pony(std::string name);
	~Pony();
};

#endif

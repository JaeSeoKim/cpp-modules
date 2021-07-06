#if !defined(WEAPONE_HPP)
#define WEAPONE_HPP

#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string type);
	void setType(std::string type);
	std::string &getType();
	~Weapon();
};

#endif // WEAPONE_HPP

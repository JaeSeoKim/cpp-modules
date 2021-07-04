#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
}
Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << "Hello 🦄 I'm " << this->name << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << ": Bye 🦄" << std::endl;
}

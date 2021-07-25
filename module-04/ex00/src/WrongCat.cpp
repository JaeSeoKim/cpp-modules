#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong Cat";
	std::cout << type << " is born" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->WrongAnimal::operator=(copy);
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << type << " is dead" << std::endl;
}

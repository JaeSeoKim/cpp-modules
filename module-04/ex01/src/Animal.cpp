#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Some animal";
	std::cout << "Born " << this->type << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Born " << this->type << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Die " << this->type << std::endl;
}

std::string const &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal Animal!!!" << std::endl;
}

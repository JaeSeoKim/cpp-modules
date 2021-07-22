
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::~Dog()
{
}

Dog::Dog(Dog const &other) : Animal(other)
{
}

Dog &Dog::operator=(Dog const &other)
{
	this->Animal::operator=(other);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bow-wow!!!" << std::endl;
}

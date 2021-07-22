
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::~Cat()
{
}

Cat::Cat(Cat const &other) : Animal(other)
{
}

Cat &Cat::operator=(Cat const &other)
{
	this->Animal::operator=(other);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const WrongAnimal *wrong = new WrongCat();
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		dog->makeSound();
		meta->makeSound();
		wrong->makeSound();
		delete meta;
		delete cat;
		delete dog;
		delete wrong;
	}
	system("leaks Polymorphism");
	return (0);
}

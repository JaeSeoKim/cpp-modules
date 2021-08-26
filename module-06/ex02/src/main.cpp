#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		Base *p = generate();
		identify(p);
	}
	return 0;
}

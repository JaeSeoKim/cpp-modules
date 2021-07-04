#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("ponyOnTheHeap");

	delete pony;
}

void ponyOnTheStack(void)
{
	Pony pony = Pony("ponyOnTheStack");
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

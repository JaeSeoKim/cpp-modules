#include "Serialization.hpp"

int main(void)
{
	Data jaeskim;

	jaeskim.name = "JaeSeoKim";
	jaeskim.age = 21;

	uintptr_t out = serialize(&jaeskim);

	Data *data = deserialize(out);

	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age: " << data->age << std::endl;
}

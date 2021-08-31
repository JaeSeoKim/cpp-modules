#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;

	try
	{
		std::cout << *easyfind(v, 10) << std::endl;
		std::cout << *easyfind(v, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

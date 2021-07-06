#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str" << &str << " " << str << std::endl;
	std::cout << "ptr" << stringPTR << " " << *stringPTR << std::endl;
	std::cout << "ref" << &stringREF << " " << stringREF << std::endl;
}

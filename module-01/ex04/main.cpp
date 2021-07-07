#include <iostream>
#include <fstream>

static std::string ft_replace(std::string str, std::string s1, std::string s2)
{
	std::string result;
	std::string::size_type start = 0;
	std::string::size_type n;

	while ((n = str.find(s1, start)) != std::string::npos)
	{
		str.erase(n, s1.length());
		str.insert(n, s2);
		start = n + s2.length();
	}
	return (str);
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Error: Wrong Arugments!" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream ifile(filename.data());
	if (!ifile.is_open())
	{
		std::cerr << "Error: Wrong filename!" << std::endl;
		return (1);
	}
	std::ofstream ofile((filename + ".replace").data());
	if (!ofile.is_open())
	{
		ifile.close();
		std::cerr << "Error: file open error" << std::endl;
		return (1);
	}

	while (true)
	{
		std::string line;
		std::getline(ifile, line);

		ofile << ft_replace(line, s1, s2);
		if (ifile.eof())
			break;
		ofile << std::endl;
	}
	ifile.close();
	ofile.close();
	return (0);
}

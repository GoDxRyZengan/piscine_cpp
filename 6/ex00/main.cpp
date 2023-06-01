#include <string>
#include "ScalarConverter.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong numbers of paramater. Exp : ./exec \"string\"" << std::endl;
		return (0);
	}
	std::string str = argv[1];
	ScalarConverter	test;
	test.convert(str);
	return (0);
}
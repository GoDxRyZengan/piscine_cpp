#include "./Harl.hpp"

int		main(int argc, char **argv)
{
	Harl	test;

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	std::string tmp = argv[1];
	if (tmp == "DEBUG" || tmp == "INFO" || tmp == "WARNING" || tmp == "ERROR")
		test.complain(argv[1]);
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}
	return 0;
}
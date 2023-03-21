#include <iostream>
#include <string>

int		main(void)
{
	// std::string string = "HI THIS IS BRAIN";
	// std::string *stringPTR = &string;
	// std::string &stringREF = string;

	// std::cout << string << std::endl;
	// std::cout << stringPTR << std::endl;
	// std::cout << stringREF << std::endl;
	// std::cout << &string << std::endl;
	// std::cout << &stringREF << std::endl;
	// std::cout << *stringPTR << std::endl;

	// // exemple

	// stringREF = "Bonjour le monde";
	// std::cout << string << std::endl;
	// std::cout << stringPTR << std::endl;
	// std::cout << stringREF << std::endl;
	// std::cout << &string << std::endl;
	// std::cout << &stringREF << std::endl;
	// std::cout << &stringPTR << std::endl;

	// exemple

	std::string		test1 = "j suis une chevre";
	std::string		*ptr1 = &test1;
	std::string		*ptr2 = NULL;

	std::cout << test1 << std::endl;
	std::cout << ptr1 << std::endl;

	ptr2 = &test1;

	std::cout << test1 << std::endl;
	std::cout << *ptr2 << std::endl;

	test1 = "j suis plus une chevre";

	std::cout << test1 << std::endl;
	std::cout << *ptr2 << std::endl;
	return 0;
}

// var1 -> var2 / var2 -> var1

// est ce normal que le zombie que j utilise pour acceder au fonction
// de la classe Zombie sans nom et que je ne puisse pas lui en donner ?
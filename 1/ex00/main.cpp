#include "./Zombie.hpp"

int		main(void)
{
	Zombie	test;
	Zombie	*test2;

	test.randomChump("n'inporte quoi");
	test2 = test.newZombie("quelque chose");
	test2->announce();
	delete test2;
	return 0;
}

// est ce normal que le zombie que j utilise pour acceder au fonction
// de la classe Zombie sans nom et que je ne puisse pas lui en donner ?
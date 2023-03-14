#include "./Zombie.hpp"

int		main(void)
{
	Zombie	test;
	Zombie	*horde;

	horde = test.zombieHorde(10, "Bob");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	horde[3].announce();
	horde[4].announce();
	horde[5].announce();
	horde[6].announce();
	horde[7].announce();
	horde[8].announce();
	horde[9].announce();
	delete[] horde;
	return 0;
}

// est ce normal que le zombie que j utilise pour acceder au fonction
// de la classe Zombie sans nom et que je ne puisse pas lui en donner ?
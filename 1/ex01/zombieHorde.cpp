#include "./Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		horde[i].name = name;
		i++;
	}
	return (horde);
}
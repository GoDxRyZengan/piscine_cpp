#include "./Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie *newZ = new Zombie;

	newZ->name = name;
	return (newZ);
}
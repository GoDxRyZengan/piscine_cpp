#include "./Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie ok;

	ok.name = name;
	ok.announce();	
}
#include "./Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " got killed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
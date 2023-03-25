#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->name << " now know he is alive" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << this->name << " know he is a copy" << std::endl;	
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << " know his time reach the and self-destruct" << std::endl;
}

/* ------------------- Fonction --------------------- */

void	ScavTrap::attack(const std::string& target) : ClapTrap::attack(target)
{
	
}

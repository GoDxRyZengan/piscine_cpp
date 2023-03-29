#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap hugo("hugo");
	ScavTrap pierre(hugo);
	hugo.attack("pierre");
	pierre.guardGate();
	pierre.takeDamage(50);
	return (0);
}
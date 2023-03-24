#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap hugo("hugo");
	ClapTrap pierre("pierre");

	hugo.attack("pierre");
	pierre.beRepaired(10);
	pierre.takeDamage(5);
	pierre.beRepaired(10);
}
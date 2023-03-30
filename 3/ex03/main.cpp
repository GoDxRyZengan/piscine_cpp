#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap hugo("hugo");
	ScavTrap pierre("pierre");
	FragTrap rousseau("rousseau");

	pierre.guardGate();
	rousseau.highFivesGuys();
	return (0);
}
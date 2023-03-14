#include <iostream>
#include <string>
#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

int		main(void)
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	{
	Weapon sword("Huge sword");
	HumanB hugo("hugo");
	hugo.attack();
	hugo.setWeapon(sword);
	hugo.attack();
	}
	return 0;
}

// est ce normal que le zombie que j utilise pour acceder au fonction
// de la classe Zombie sans nom et que je ne puisse pas lui en donner ?
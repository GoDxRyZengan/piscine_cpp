#include "./HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name)
{
	HumanB::weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (HumanB::weapon == NULL)
		std::cout << HumanB::name << " attacks with nothing " << std::endl;
	else
		std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	HumanB::weapon = &new_weapon;
}
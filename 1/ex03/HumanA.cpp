#include "./HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with their " << HumanA::weapon.getType() << std::endl;
}

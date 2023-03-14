#include "./Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void)
{
	return (Weapon::type);
}

void	Weapon::setType(std::string newtype)
{
	Weapon::type = newtype;
}

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << this->name << " open his eyes for the first time, and see the world" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy)
{
	std::cout << this->name << " acknoledge the fact that he is a copy" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->name << " know is time is near it's end, he close his eyes and die happily" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& another)
{
	if (this != &another)
	{
		this->name = another.name;
		this->hit_point = another.hit_point;
		this->energy_point = another.energy_point;
		this->attack_damage = another.attack_damage;
	}
	return (*this);
}
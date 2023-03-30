#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << this->name << " open his eyes for the first time, and see the world" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << this->name << " acknoledge the fact that he is a copy" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name << " know is time is near it's end, he close his eyes and die happily" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& another)
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

/* ------------------- Fonction --------------------- */

void		FragTrap::attack(const std::string& target)
{
	if (this->hit_point == 0)
	{
		std::cout << this->name << " can't attack, HE IS DEAD" << std::endl;
	}
	else if (this->energy_point == 0)
	{
		std::cout << this->name << " can't attack, he is tired" << std::endl;
	}
	else
	{
		std::cout << this->name << " hit " << target << " with a huge hit, causing " << this->attack_damage << " points of damage, Damn what a hit" << std::endl;
		this->energy_point--;
	}
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, Let's High Fives !!!! It's so coooolll !!!! " << std::endl;
}
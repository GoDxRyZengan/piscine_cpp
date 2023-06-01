#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)

{
	std::cout << this->name << " now know he is alive" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << this->name << " know he is a copy" << std::endl;	
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << " know his time reach the end and self-destruct" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& another)
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

void		ScavTrap::attack(const std::string& target)
{
	if (this->hit_point == 0)
	{
		std::cout << this->name << " can't attack, HE IS NOT MOVING ANYMORE" << std::endl;
	}
	else if (this->energy_point == 0)
	{
		std::cout << this->name << " can't attack, he is very tired" << std::endl;
	}
	else
	{
		std::cout << this->name << " hit " << target << " with a huge hit, causing " << this->attack_damage << " points of damage" << std::endl;
		this->energy_point--;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hit_point == 0)
	{
		std::cout << this->name << " can't repair himself, HE IS DEAD" << std::endl;
	}
	else if (this->energy_point == 0)
	{
		std::cout << this->name << " can't repair himself, he is tired" << std::endl;
	}
	else if (this->hit_point == 100)
	{
		std::cout << this->name << " can't repair himself, he is full life" << std::endl;

	}
	else
	{
		while ((this->hit_point + amount) > 100)
		{
			amount--;
		}
		std::cout << this->name << " repaired himself, restoring " << amount << " hit points" << std::endl;
		this->hit_point += amount;
		this->energy_point--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " is now in Gate keeper mode" << std::endl;
}


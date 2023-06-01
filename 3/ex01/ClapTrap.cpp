#include "ClapTrap.hpp"

int		ClapTrap::hit_point = 10;
int		ClapTrap::energy_point = 10;
int		ClapTrap::attack_damage = 0;


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << this->name << " got created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " got destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << this->name << " got copied" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& another)
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

/*------------- Fonction --------------------*/

void		ClapTrap::attack(const std::string& target)
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
		std::cout << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage" << std::endl;
		this->energy_point--;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point == 0)
	{
		std::cout << this->name << " can't take damage, HE IS ALREADY DEAD" << std::endl;
	}
	else
	{
		std::cout << this->name << " got attacked causing the loose of " << amount << " hit points" << std::endl;
		this->hit_point -= amount;
	}
	if (this->hit_point == 0)
	{
		std::cout << this->name << " is now dead" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_point == 0)
	{
		std::cout << this->name << " can't repair himself, HE IS DEAD" << std::endl;
	}
	else if (this->energy_point == 0)
	{
		std::cout << this->name << " can't repair himself, he is tired" << std::endl;
	}
	else if (this->hit_point == 10)
	{
		std::cout << this->name << " can't repair himself, he is full life" << std::endl;

	}
	else
	{
		while ((this->hit_point + amount) > 10)
		{
			amount--;
		}
		std::cout << this->name << " repaired himself, restoring " << amount << " hit points" << std::endl;
		this->hit_point += amount;
		this->energy_point--;
	}
}

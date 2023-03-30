#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:

	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& copy);
	ClapTrap&	operator=(const ClapTrap& another);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	
	protected:

	std::string	name;
	static int	hit_point;
	static int	energy_point;
	static int	attack_damage;

};

#endif
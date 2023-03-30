#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& another);

	void	attack(const std::string& target);
	void	beRepaired(unsigned int amount);

	void	guardGate();	
};

#endif
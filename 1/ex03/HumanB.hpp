#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "./Weapon.hpp"

class HumanB
{

	public:

	HumanB(const std::string& name);
	~HumanB(void);
	
	void	setWeapon(Weapon& new_weapon);
	void	attack(void);

	private:

	std::string name;
	Weapon*		weapon;

};

#endif
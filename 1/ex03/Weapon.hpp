#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string&	getType(void);
	void				setType(std::string newType);

	private:

	std::string	type;
};

#endif
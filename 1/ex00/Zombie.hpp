#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);

private:

	std::string name;

};
#endif
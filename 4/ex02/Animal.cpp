#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal got constructed" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal got copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal got destructed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal&				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream&			operator<<( std::ostream & o, Animal const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- Function ----------------------------------
*/


std::string		Animal::getType(void)const
{
	return (this->type);
}

void			Animal::makeSound(void)const
{
	std::cout << getType() << " is not a specific animal" << std::endl;
}

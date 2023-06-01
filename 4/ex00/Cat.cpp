#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat got constructed" << std::endl;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Cat got copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat got destructed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- Function ----------------------------------
*/

std::string		Cat::getType(void)const
{
	return (this->type);
}

void			Cat::makeSound(void)const
{
	std::cout << getType() << " make miou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
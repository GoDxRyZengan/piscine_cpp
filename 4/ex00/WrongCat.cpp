#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
	std::cout << "Wrong Cat got constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Wrong Cat got copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat got destructed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- Function ----------------------------------
*/

std::string		WrongCat::getType(void)const
{
	return (this->type);
}

void			WrongCat::makeSound(void)const
{
	std::cout << getType() << " make miou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
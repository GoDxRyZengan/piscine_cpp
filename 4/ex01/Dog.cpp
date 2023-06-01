#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog got constructed" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog const& copy) : Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Dog got copied" << std::endl;
	this->brain = new Brain;
	for (int i = 0;i<100;i++)
	{
		this->brain->set_idea(i, copy.brain->get_idea(i));
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog got destructed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		delete this->brain;
		this->brain = new Brain;
		for (int i = 0;i<100;i++)
		{
			this->brain->set_idea(i, rhs.brain->get_idea(i));
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- Function ----------------------------------
*/

std::string		Dog::getType(void)const
{
	return (this->type);
}

void			Dog::makeSound(void)const
{
	std::cout << getType() << " make wouf" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
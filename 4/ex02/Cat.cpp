#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat got constructed" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Cat got copied" << std::endl;
	this->brain = new Brain;
	for (int i = 0;i<100;i++)
	{
		this->brain->set_idea(i, copy.brain->get_idea(i));
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->brain;
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
		delete this->brain;
		this->brain = new Brain;
		for (int i = 0;i<100;i++)
		{
			this->brain->set_idea(i, rhs.brain->get_idea(i));
		}
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

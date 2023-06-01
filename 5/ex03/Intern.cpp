#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm*				Intern::makeForm(std::string type, std::string target)
{
	std::string	array_string[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm*		(Intern::*arrayfptr[3])(std::string target) = {&Intern::presidential, &Intern::shrubbery, &Intern::robotomy};

	for (int i = 0;i<3;i++)
	{
		if (array_string[i] == type)
		{
			return ((this->*arrayfptr[i])(target));
		}
	}
	std::cout << "Form " << type << " not found" << std::endl;
	return (NULL); 
}

AForm*				Intern::presidential(std::string target)
{
	AForm	*res = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << res->getName() << std::endl;
	return (res);
}

AForm*				Intern::shrubbery(std::string target)
{
	AForm	*res = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << res->getName() << std::endl;
	return (res);
}

AForm*				Intern::robotomy(std::string target)
{
	AForm	*res = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << res->getName() << std::endl;
	return (res);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
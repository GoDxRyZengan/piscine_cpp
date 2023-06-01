#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm("Presidential Pardon Form", 25, 5)
{
	this->setTarget(src.getTarget());
	this->setSign(src.getIsSigned());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSign(rhs.getIsSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "The Precidential Pardon form target is " << i.getTarget();
	if (i.getIsSigned() == 1)
		o << " is signed and need grade ";
	else
		o << " is not signed and need grade ";
	o << i.getSignGrade() << " to get signed and grade " << i.getExecGrade() << " to get executed" << std::endl;
	return o;
}

/*
** --------------------------------- Functions ----------------------------------
*/

bool			PresidentialPardonForm::execute(const Bureaucrat &executor)const
{
	if (AForm::execute(executor))
	{
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (true);
	}
	return (false);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
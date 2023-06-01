#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget(src.getTarget());
	this->setSign(src.getIsSigned());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSign(rhs.getIsSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "The Robotomy Request form target is " << i.getTarget();
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

bool			RobotomyRequestForm::execute(const Bureaucrat &executor)const
{
	if (AForm::execute(executor))
	{
		srand(time(NULL));
		int rate = rand() % 2;
		if (rate == 0)
			std::cout << "BRRRRRRrrrrrRRR, " << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "BRRRRRRrrrrrRRR  BOOOOOMMM BBAAAMMA, " << this->getTarget() << " robotomy failed" << std::endl;

		return (true);
	}
	return (false);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
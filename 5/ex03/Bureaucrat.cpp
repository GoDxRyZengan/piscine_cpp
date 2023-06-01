#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.name), grade(src.grade)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade is " << i.getGrade() << std::endl;
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Bureaucrat::getName(void)const
{
	return (this->name);
}

int				Bureaucrat::getGrade(void)const
{
	return (this->grade);
}

/*
** --------------------------------- Function ----------------------------------
*/

void			Bureaucrat::rankUp(void)
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void			Bureaucrat::rankDown(void)
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void			Bureaucrat::signForm(std::string name, int i)const
{
	if (i == 1)
		std::cout << this->name << " signed " << name << std::endl;
	else if (i == 0)
		std::cout << this->name << " couldn't sign " << name << " because " << "his grade is too low" << std::endl;
	else
		std::cout << this->name << " couldn't sign " << name << " because " << "the form is already signed" << std::endl;
		
}

void			Bureaucrat::executeForm(const AForm &form)
{
	if (this->getGrade() <= form.getExecGrade() && form.getIsSigned() == true)
	{
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	else if (this->getGrade() > form.getExecGrade())
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because " << "his grade is too low" << std::endl;
	}
	else
		std::cout << this->name << " couldn't execute " << form.getName() << " because " << "the form is not sign" << std::endl;
}

/* ************************************************************************** */
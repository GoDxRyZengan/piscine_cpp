#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int sign, int exec) : name(name), sign_grade(sign), exec_grade(exec)
{
	this->is_sign = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw Form::GradeTooHighException();
	if (this->sign_grade > 150 || this->exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ) : name(src.name), sign_grade(src.sign_grade), exec_grade(src.exec_grade)
{
	this->is_sign = src.is_sign;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->is_sign = rhs.getIsSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName();
	if (i.getIsSigned() == 1)
		o << " is signed and need grade ";
	else
		o << " is not signed and need grade ";
	o << i.getSignGrade() << " to get signed and grade " << i.getExecGrade() << " to get executed" << std::endl;
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Form::getName(void)const
{
	return (this->name);
}

bool			Form::getIsSigned(void)const
{
	return (this->is_sign);
}

int				Form::getSignGrade(void)const
{
	return (this->sign_grade);
}

int				Form::getExecGrade(void)const
{
	return (this->exec_grade);
}

/*
** --------------------------------- Functions ----------------------------------
*/

void			Form::beSigned(const Bureaucrat& employe)
{

	if (employe.getGrade() <= this->sign_grade && this->is_sign == false)
	{
		this->is_sign = true;
		employe.signForm(this->name, 1);
	}
	else if (employe.getGrade() > this->sign_grade)
	{
		employe.signForm(this->name, 0);
		throw Form::GradeTooLowException();
	}
	else
		employe.signForm(this->name, 2);
}

/* ************************************************************************** */
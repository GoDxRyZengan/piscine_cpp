#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string name, int sign, int exec) : name(name), sign_grade(sign), exec_grade(exec)
{
	this->is_sign = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw AForm::GradeTooHighException();
	if (this->sign_grade > 150 || this->exec_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & src ) : name(src.name), sign_grade(src.sign_grade), exec_grade(src.exec_grade)
{
	this->is_sign = src.is_sign;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->is_sign = rhs.getIsSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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

std::string		AForm::getName(void)const
{
	return (this->name);
}

bool			AForm::getIsSigned(void)const
{
	return (this->is_sign);
}

int				AForm::getSignGrade(void)const
{
	return (this->sign_grade);
}

int				AForm::getExecGrade(void)const
{
	return (this->exec_grade);
}

std::string		AForm::getTarget(void)const
{
	return (this->target);
}

void			AForm::setSign(bool value)
{
	this->is_sign = value;
}

void			AForm::setTarget(std::string target)
{
	this->target = target;
}

/*
** --------------------------------- Functions ----------------------------------
*/

void			AForm::beSigned(const Bureaucrat& employe)
{
	if (employe.getGrade() <= this->sign_grade && this->is_sign == false)
	{
		this->is_sign = true;
		employe.signForm(this->name, 1);
	}
	else if (employe.getGrade() > this->sign_grade)
	{
		employe.signForm(this->name, 0);
		throw AForm::GradeTooLowException();
	}
	else
		employe.signForm(this->name, 2);
}

bool			AForm::execute(const Bureaucrat &executor)const
{
	if (executor.getGrade() <= this->getExecGrade() && this->is_sign == true)
	{
		return (true);
	}
	else if (executor.getGrade() > this->getExecGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		throw AForm::FormNotSigned();
	}
	return (false);
}

/* ************************************************************************** */
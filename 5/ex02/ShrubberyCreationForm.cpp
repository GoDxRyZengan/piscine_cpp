#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget(src.getTarget());
	this->setSign(src.getIsSigned());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setSign(rhs.getIsSigned());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "The Shrubbery Creation form target is " << i.getTarget();
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

bool			ShrubberyCreationForm::execute(const Bureaucrat &executor)const
{
	if (AForm::execute(executor))
	{
		std::string file = executor.getName() += "_shrubbery";
		std::ofstream dest_file(file.c_str());
		std::ifstream source_file("tree.txt");
		std::string line;
		if (!dest_file.is_open())
		{
			std::cout << "failed to create file!" << std::endl;
			return (false);
		}
		while (std::getline(source_file, line))
			dest_file << line << std::endl;
		return (true);
	}
	return (false);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
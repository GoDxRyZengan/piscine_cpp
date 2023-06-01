#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

// class ShrubberyCreationForm;

// class RobotomyRequestForm;

// class PresidentialPardonForm;

class AForm;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm*			makeForm(std::string type, std::string target);
		AForm*			presidential(std::string target);
		AForm*			robotomy(std::string target);
		AForm*			shrubbery(std::string target);

	private:

};

#endif /* ********************************************************** INTERN_H */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Intern.hpp"


int		main(void)
{
	Bureaucrat macron("macron", 1);
	Intern rdmIntern;
	AForm *test;

	test = rdmIntern.makeForm("robotomy request", "andre");
	test->beSigned(macron);
	test->execute(macron);
	std::cout << *test;
	return 0;
}
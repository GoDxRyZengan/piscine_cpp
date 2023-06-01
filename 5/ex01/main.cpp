#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat macron("Macron", 1);
	Bureaucrat lepen("Lepen", 20);

	Form reforme("49.3", 10, 1);
	std::cout << lepen;
	std::cout << macron;
	std::cout << reforme;
	reforme.beSigned(macron);
	try {
		reforme.beSigned(lepen);
	}
	catch (const Form::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	reforme.beSigned(macron);
	return 0;
}
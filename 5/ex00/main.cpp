#include "Bureaucrat.hpp"

int		main(void)
{
	////////////////// try creation of wrong bureaucrat ///////////////////////

	try {
		Bureaucrat	Pierre("pierre", 0);
	}
	catch (const Bureaucrat::GradeTooHighException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat	Fael("fael", 151);
	}
	catch (const Bureaucrat::GradeTooHighException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}

	////////////////// try wrong up/down grade ///////////////////////

	Bureaucrat Hugo("hugo", 1);
	Bureaucrat Filou("filou", 150);

	try {
		Hugo.rankUp();
	}
	catch (const Bureaucrat::GradeTooHighException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		Filou.rankDown();
	}
	catch (const Bureaucrat::GradeTooHighException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}

	////////////////// surcharge d'operateur << ///////////////////////

	 std::cout << Hugo;
	 std::cout << Filou;

	return 0;
}
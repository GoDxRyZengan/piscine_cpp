#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int		main(void)
{
	Bureaucrat macron("Macron", 1);
	Bureaucrat michel("michel", 150);

		/////////////	Shrubbery Test	////////////////////

	ShrubberyCreationForm salon("salon");
	ShrubberyCreationForm chambre("chambre");

	salon.beSigned(macron);
	std::cout << salon;
	salon.execute(macron);

		/////////////	Form is not sign	////////////////////

	try
	{
		chambre.execute(macron);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

		/////////////	grade is too low	////////////////////

	try
	{
		salon.execute(michel);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

		/////////////	Presidential pardon Test	////////////////////

	PresidentialPardonForm hugo("hugo");
	PresidentialPardonForm pierre("pierre");

	hugo.beSigned(macron);
	std::cout << hugo;
	hugo.execute(macron);

		/////////////	Form is not sign	////////////////////

	try
	{
		pierre.execute(macron);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

		/////////////	grade is too low	////////////////////

	try
	{
		hugo.execute(michel);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

	/////////////	Robotomy Request Test	////////////////////

	RobotomyRequestForm alex("alex");
	RobotomyRequestForm fael("fael");

	alex.beSigned(macron);
	std::cout << alex;
	alex.execute(macron);

		/////////////	Form is not sign	////////////////////

	try
	{
		fael.execute(macron);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

		/////////////	grade is too low	////////////////////

	try
	{
		alex.execute(michel);
	}
	catch (const AForm::GradeTooLowException& ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{

	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		class GradeTooHighException : public std::exception{
			
			public :

				const char* what() const throw() {
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception{
			
			public :
				
				const char* what() const throw() {
					return ("Grade too low");
				}
		};

		/////////////	ACCESSOR	////////////////////

		std::string			getName(void)const;
		int					getGrade(void)const;

		/////////////	FUNCTION	////////////////////

		void				rankUp(void);
		void				rankDown(void);
		void				signForm(std::string name, int i)const;
		void				executeForm(const AForm &form);

	private:


		const std::string	name;
		int					grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
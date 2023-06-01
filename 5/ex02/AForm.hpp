#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class AForm
{

	public:
		AForm(std::string name, int sign_grade, int exec_grade);
		AForm( AForm const & src );
		virtual ~AForm() = 0;

		AForm &		operator=( AForm const & rhs );

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

		class FormNotSigned : public std::exception{
			
			public :
				
				const char* what() const throw() {
					return ("Form is not sign");
				}
		};

		/////////////	ACCESSOR	////////////////////

		std::string		getName(void)const;
		std::string		getTarget(void)const;
		bool			getIsSigned(void)const;
		int				getSignGrade(void)const;
		int				getExecGrade(void)const;
		
		void			setSign(bool value);
		void			setTarget(std::string target);

		/////////////	FUNCTION	////////////////////
		
		void			beSigned(const Bureaucrat& employe);
		bool			execute(const Bureaucrat &executor)const;

	private:

		const std::string	name;
		std::string			target;
		bool				is_sign;
		const int			sign_grade;
		const int			exec_grade;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{

	public:

		Form(std::string name, int sign_grade, int exec_grade);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

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

		std::string		getName(void)const;
		bool			getIsSigned(void)const;
		int				getSignGrade(void)const;
		int				getExecGrade(void)const;
		void			beSigned(const Bureaucrat& employe);

	private:

		const std::string	name;
		bool				is_sign;
		const int			sign_grade;
		const int			exec_grade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
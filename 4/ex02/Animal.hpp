#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		virtual ~Animal();
		Animal(const Animal& copy);

		Animal &		operator=( Animal const & rhs );

		virtual std::string		getType()const;
		virtual void			makeSound()const = 0;

	protected:

		std::string	type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
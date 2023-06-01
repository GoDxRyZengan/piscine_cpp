#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(const Dog& copy);
		~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual std::string		getType()const;
		virtual void			makeSound()const;

	protected:

		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */
#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat(const Cat& copy);
		~Cat();

		Cat &		operator=( Cat const & rhs );

		virtual std::string		getType()const;
		virtual void			makeSound()const;

	protected:

		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */
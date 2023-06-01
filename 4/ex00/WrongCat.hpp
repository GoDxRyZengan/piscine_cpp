#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );

		virtual	std::string		getType()const;
		void					makeSound()const;

	protected:

		std::string type;

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ******************************************************** WRONGCAT_H */
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		virtual	~WrongAnimal();

		WrongAnimal &	operator=( WrongAnimal const & rhs );

		virtual	std::string		getType()const;
		void					makeSound()const;

	protected:

		std::string	type;


};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */
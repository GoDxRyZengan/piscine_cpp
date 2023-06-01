#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain &		operator=(const Brain& rhs);
		std::string	get_idea(int index);
		void		set_idea(int index, std::string new_idea);

	private:

		static	std::string		ideas[100];

};
#endif /* *********************************************************** BRAIN_H */
#include "Brain.hpp"

std::string Brain::ideas[100] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
					"10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
					"20", "21", "22", "23", "24", "25", "26", "27", "28", "29",
					"30", "31", "32", "33", "34", "35", "36", "37", "38", "39",
					"40", "41", "42", "43", "44", "45", "46", "47", "48", "49",
					"50", "51", "52", "53", "54", "55", "56", "57", "58", "59",
					"60", "61", "62", "63", "64", "65", "66", "67", "68", "69",
					"70", "71", "72", "73", "74", "75", "76", "77", "78", "79",
					"80", "81", "82", "83", "84", "85", "86", "87", "88", "89",
					"90", "91", "92", "93", "94", "95", "96", "97", "98", "99"};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain got constructed" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Brain got copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain got destructed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::string		Brain::get_idea(int index)
{
	if (index >= 100)
		return (NULL);
	return (this->ideas[index]);
}

void		Brain::set_idea(int index, std::string new_idea)
{
	if (index >= 100)
		return;
	this->ideas[index] = new_idea;
}
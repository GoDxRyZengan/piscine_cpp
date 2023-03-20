#ifndef HARL_HPP
# define HARL_HPp

# include <string>
# include <iostream>

class Harl
{
	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

	private:

	void	debug(void)
	{
		std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	}
	void	info(void)
	{
		std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	}
	void	warning(void)
	{
		std::cout << "[WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	}
	void	error(void)
	{
		std::cout << "[ ERROR ]\nThis is unacceptable ! I want to speak to the manager now." << std::endl;
	}
};


#endif
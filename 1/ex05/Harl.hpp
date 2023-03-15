#ifndef HARL_HPP
# define HARL_HPp

# include <string>
# include <iostream>

class Harl
{
	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level)
	{
		void	(Harl::*)ptr = NULL;

		if (level == "DEBUG")
			ptr = &Harl::debug();
		if (level == "INFO")
			ptr = &Harl::info();
		if (level == "WARNING")
			ptr = &Harl::warning();
		if (level == "ERROR")
			ptr = &Harl::error();
	}

	private:

	void	debug(void)
	{
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	}
	void	info(void)
	{
		std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	}
	void	warning(void)
	{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}
	void	error(void)
	{
		std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	}
};

#endif
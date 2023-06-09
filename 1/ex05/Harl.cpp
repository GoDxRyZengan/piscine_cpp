#include "./Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	Harl	test;
	void	(Harl::*fptr)();


	switch (level[0])
	{
		case 'D':
			fptr = &Harl::debug;
			(test.*fptr)();
			break;
		case 'I':
			fptr = &Harl::info;
			(test.*fptr)();
			break;
		case 'W':
			fptr = &Harl::warning;
			(test.*fptr)();
			break;
		case 'E':
			fptr = &Harl::error;
			(test.*fptr)();
			break;
	}
}
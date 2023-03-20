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
		case 'I':
			fptr = &Harl::info;
			(test.*fptr)();
		case 'W':
			fptr = &Harl::warning;
			(test.*fptr)();
		case 'E':
			fptr = &Harl::error;
			(test.*fptr)();
	}
}
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed& copy);
		Fixed& operator=(const Fixed& another)
		{
			Fixed::value = another.getRawBits();
			std::cout << "Copy assignment operator called" << std::endl;
			return (*this);
		}
		Fixed(const int nb);
		Fixed(const float nb);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);

		float	toFloat(void)const;
		int		toInt(void)const;

	private:

		int					value;
		static const int	bit = 8;
};

#endif
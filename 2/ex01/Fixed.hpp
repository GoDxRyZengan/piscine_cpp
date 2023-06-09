#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& copy);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed& operator=(const Fixed& another);
		
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;

	private:

		int					value;
		static const int	bit;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &in);

#endif
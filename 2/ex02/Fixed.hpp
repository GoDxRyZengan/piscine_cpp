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

		bool		operator==(const Fixed& another)const;
		bool		operator>(const Fixed& another)const;
		bool		operator<(const Fixed& another)const;
		bool		operator>=(const Fixed& another)const;
		bool		operator<=(const Fixed& another)const;
		bool		operator!=(const Fixed& another)const;

		Fixed		operator+(const Fixed& c1)const;
		Fixed		operator-(const Fixed& c1)const;
		Fixed		operator*(const Fixed& c1)const;
		Fixed		operator/(const Fixed& c1)const;

		Fixed&		operator++();
		Fixed		operator++(int nb);
		Fixed&		operator--();
		Fixed		operator--(int nb);

		int			getRawBits(void)const;
		void		setRawBits(int const raw);

		float		toFloat(void)const;
		int			toInt(void)const;

		static Fixed&	min(Fixed& v1, Fixed& v2);
		static Fixed&	max(Fixed& v1, Fixed& v2);
		const static Fixed&	min(const Fixed& v1, const Fixed& v2);
		const static Fixed&	max(const Fixed& v1, const Fixed& v2);

	private:

		int					value;
		static const int	bit;
};

std::ostream&	operator<<(std::ostream& out, Fixed const &in);

#endif
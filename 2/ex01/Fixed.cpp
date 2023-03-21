#include "Fixed.hpp"

Fixed::Fixed(void)
{
	Fixed::value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& copy)
{
	Fixed::value = copy.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::value);
}

void	Fixed::setRawBits(int const raw)
{
	Fixed::value = raw;
}

Fixed::Fixed(const int nb)const
{

}
#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void)
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	this->value = nb << bit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
	this->value = roundf(nb * (1 << bit));
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::getRawBits(void)const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}


float	Fixed::toFloat(void)const
{
	return ((float)this->value / (1 << bit));
}

int		Fixed::toInt(void)const
{
	return ((int)this->value >> bit);
}

Fixed& Fixed::operator=(const Fixed& another)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &another)
	{
		this->value = another.getRawBits();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}

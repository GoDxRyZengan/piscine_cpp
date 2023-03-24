#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(Fixed const& copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const int nb)
{
	this->value = nb << bit;
}

Fixed::Fixed(const float nb)
{
	this->value = roundf(nb * (1 << bit));
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
	if (this != &another)
	{
		this->value = another.getRawBits();
	}
	return (*this);
}

// ---------------surcharge d'operateur de comparaison -----------------

std::ostream&	operator<<(std::ostream& out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}

bool	Fixed::operator==(const Fixed& another)const
{
	return (this->value == another.value);
}

bool	Fixed::operator>(const Fixed& another)const
{
	return (this->value > another.value);
}

bool	Fixed::operator<(const Fixed& another)const
{
	return (this->value < another.value);
}

bool	Fixed::operator>=(const Fixed& another)const
{
	return (this->value >= another.value);
}

bool	Fixed::operator<=(const Fixed& another)const
{
	return (this->value <= another.value);
}

bool	Fixed::operator!=(const Fixed& another)const
{
	return (this->value != another.value);
}

// ---------------surcharge d'operateur de calcul-----------------

Fixed		Fixed::operator+(const Fixed& c1)const
{
	return (Fixed(this->toFloat() + c1.toFloat()));
}

Fixed		Fixed::operator-(const Fixed& c1)const
{
	return (Fixed(this->toFloat() - c1.toFloat()));
}

Fixed		Fixed::operator*(const Fixed& c1)const
{
	return (Fixed(this->toFloat() * c1.toFloat()));
}

Fixed		Fixed::operator/(const Fixed& c1)const
{
	return (Fixed(this->toFloat() / c1.toFloat()));
}

// -----surcharge d'operateur d'incremenation / decrementation --------

Fixed&		Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed		Fixed::operator++(int nb)
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed&		Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed		Fixed::operator--(int nb)
{
	Fixed tmp = *this;
	--this->value;
	return (tmp);
}

// ----- fonction de check sup/inf --------


Fixed&		Fixed::min(Fixed& v1, Fixed& v2)
{
	if (v1.toFloat() < v2.toFloat())
		return (v1);
	else
		return (v2);
}

Fixed&		Fixed::max(Fixed& v1, Fixed& v2)
{
	if (v1.toFloat() > v2.toFloat())
		return (v1);
	else
		return (v2);
}

const Fixed&	Fixed::min(const Fixed& v1, const Fixed& v2)
{
	if (v1.toFloat() < v2.toFloat())
		return (v1);
	else
		return (v2);
}

const Fixed&	Fixed::max(const Fixed& v1, const Fixed& v2)
{
	if (v1.toFloat() > v2.toFloat())
		return (v1);
	else
		return (v2);
}

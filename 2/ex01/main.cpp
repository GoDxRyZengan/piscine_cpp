#include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// resultat du exec pas comforme
// probleme viens de la surcharge d'operateur
// et du getRawBits
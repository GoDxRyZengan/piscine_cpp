#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		ScalarConverter::convert(std::string& str)
{
	if (isInteger(str))
		printInt(atoi(str.c_str()));
	else if (isChar(str))
		printChar(str);
	else if (isFloat(str))
		printFloat(str);
	else if (isDouble(str))
		printDouble(str);
	else if (str == "-inff" || str == "+inff" || str == "nanf"
			|| str == "-inf" || str == "+inf" || str == "nan")
		printSpe(str);
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
}

////////////////////////// printer /////////////////////////////////

void		ScalarConverter::printInt(int nb)
{
	std::cout << "Int" << std::endl;
	if (nb > 126 || nb < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(nb) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

void		ScalarConverter::printChar(std::string &str)
{
	std::cout << "char" << std::endl;
	char	c = str[0];
	std::cout << "char: \'" << static_cast<char>(c) << "\'" << std::endl;
	std::cout << "int: \'" << static_cast<int>(c) << "\'" << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void		ScalarConverter::printFloat(std::string &str)
{
	std::cout << "float" << std::endl;
	std::istringstream	my_stream(str);
	float	value;
	my_stream >> value;
	if (value > 126 || value < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(value) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::size_t found = str.find('.');
	if (found != std::string::npos)
	{
		int pre = (str.length() - 1) - (found + 1);
		std::cout << std::fixed << std::setprecision(pre) << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(pre) << "double: " << static_cast<double>(value) << "0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
}

void		ScalarConverter::printDouble(std::string &str)
{
	std::cout << "double" << std::endl;
	std::istringstream	my_stream(str);
	double	value;
	my_stream >> value;
	if (value > 126 || value < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(value) << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::size_t found = str.find('.');
	if (found != std::string::npos)
	{
		int pre = str.length() - (found + 1);
		std::cout << std::fixed << std::setprecision(pre) << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(pre) << "double: " << static_cast<double>(value) << "0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
}

void		ScalarConverter::printSpe(std::string &str)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	if (str == "-inff" || str == "-inf")
	{
		double infvalue = std::numeric_limits<double>::infinity();
		std::cout << "float: -" << infvalue << "f" << std::endl;
		std::cout << "double: -" << infvalue << std::endl; 
	}
	else if (str == "+inff" || str == "+inf")
	{
		double infvalue = std::numeric_limits<double>::infinity();
		std::cout << "float: +" << infvalue << "f" << std::endl;
		std::cout << "double: +" << infvalue << std::endl; 
	}
	else
	{
		double	nanvalue = std::numeric_limits<double>::quiet_NaN();
		std::cout << "float: " << nanvalue << "f" << std::endl;
		std::cout << "double: " << nanvalue << std::endl; 
	}
}

////////////////////////// Checker /////////////////////////////////

bool		ScalarConverter::isDouble(std::string &str)
{
	std::istringstream	my_stream(str);
	float	value;
	if (!(my_stream >> value))
		return (false);
	char buffer[100]
	std::sprintf(buffer, "%f", value);
	std::string check(buffer)
	if (str.size() != check.size())
		return (false);
	return (true);
}

bool		ScalarConverter::isFloat(std::string &str)
{
	std::istringstream	my_stream(str);
	float	value;
	if (!(my_stream >> value))
		return (false);
	int i = 0;
	while (str[i])
		i++;
	if (str[i - 1] != 'f')
		return (false);
	return (true);
}

bool		ScalarConverter::isChar(std::string &str)
{
	if (str.length() == 1)
		return (true);
	return (false);
}

bool		ScalarConverter::isInteger(std::string &str)
{
	const char	*cstr = str.c_str();
	char 		*nptr;
	long int res = std::strtol(cstr, &nptr, 10);

	if (nptr[0] != '\0')
		return (false);
	if (res > INT_MAX || res < INT_MIN)
		return (false);
	return (true);		
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
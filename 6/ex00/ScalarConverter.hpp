#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <cstring>
# include <sstream>
# include <iomanip>
# include <cmath>
# include <limits>
# include <cstdio>

#define INT_MAX  2147483647
#define INT_MIN  -2147483648

class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &		operator=( ScalarConverter const & rhs );

		static void				convert(std::string& str);
		static bool				isInteger(std::string &str);
		static bool				isChar(std::string &str);
		static bool				isFloat(std::string &str);
		static bool				isDouble(std::string &str);

		static void				printInt(int nb);
		static void				printChar(std::string &str);
		static void				printFloat(std::string &str);
		static void				printDouble(std::string &str);
		static void				printSpe(std::string &str);

	private:

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <limits.h>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

# define PSEUDO	0
# define CHAR	1
# define INT	2
# define FLOAT	3
# define DOUBLE	4

class ScalarConverter
{
	private:
		static const std::string	_pseudoLiterals[6];
		static std::string			_strLiteral;
		static int					_typeLiteral;

		static bool defineType(std::string str);

		static void convertChar();
		static void convertInt();
		static void convertFloat();
		static void convertDouble();

		static void printChar(char c);
		static void printInt(int i);
		static void printFloat(float f);
		static void printDouble(double d);
		static void printPseudo();

		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();

		ScalarConverter &operator=(ScalarConverter const &rhs);

	public:
		static void convert(std::string strLiteral);

};

#endif
 
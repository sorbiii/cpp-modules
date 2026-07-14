#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) 
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) 
{
	if (this != &other)
	{
		(void)other;
	} 
	return *this; 
}

ScalarConverter::~ScalarConverter() {}

bool isNumber(std::string target)
{
	int dots = 0;
	int exponent = 0;

	for (unsigned int i = 0; i < target.size(); i++) // unsigned bo inaczej nie przyrównam do .size()
	{
		if (target[i] == '-' && i == 0)
			i++;
		if (target[i] == '.')
		{
			dots += 1;
			if (dots > 1)
				return false;
			i++;
		}
		if (!isdigit(target[i]))
		{
			if ((target[i] == 'e' || target[i] == 'E') && i != target.size() - 1)
			{
				exponent += 1;
				if (exponent > 1 || i == 0)
					return false;
				char next = target[i + 1];
				if (!isdigit(next) && next != '-')
					return false;
			}
			else if ((target[i] == 'f' || target[i] == 'F') && i == target.size() - 1)
			{
				if (dots == 0 && exponent == 0)
					return false;
			}
			else
				return false;
		}
	}
	return true;
}

void printChar(std::string target)
{
	int	value = atoi(target.c_str());

	if (!isNumber(target) || value > 127 || value < 0)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (!isprint(value))
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::convert(std::string target)
{
	printChar(target);
	if (isNumber(target))
		std::cout << "to numerek:)" << std::endl;
	else
		std::cout << "to nie jest numerek:(" << std::endl;
		
}
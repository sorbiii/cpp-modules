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
				if (i == 0)
					return false;
				// if (dots == 0 && exponent == 0)
				// 	return false;
				continue;
			}
			else
				return false;
		}
	}
	return true;
}

void printChar(std::string target)
{
	if (target.size() == 1 && !isdigit(target[0]))
	{
		char c = target[0];
		if (!isprint(c))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c << "'" << std::endl;
	}
	else
	{
		int value = atoi(target.c_str());
		if (!isNumber(target) || value > 127 || value < 0)
			std::cout << "char: impossible" << std::endl;
		else if (!isprint(value))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}
}

void printInt(std::string target)
{
	if (target.length() == 1 && !std::isdigit(target[0]))
	{
		std::cout << "int: " << static_cast<int>(target[0]) << std::endl;
		return;
	}
	if (!isNumber(target))
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	double value = std::atof(target.c_str());
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min() || std::isnan(value))
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void printFloat(std::string target)
{
	if (target.length() == 1 && !std::isdigit(target[0]))
	{
		float value = static_cast<float>(target[0]);
		std::stringstream ss;
		ss << std::fixed << std::setprecision(1) << value << "f";
		std::cout << "float: " << ss.str() << std::endl;
		return;
	}
	if (target == "nan" || target == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		return;
	}
	if (target == "+inf" || target == "-inf" || target == "+inff" || target == "-inff")
	{
		std::cout << "float: " << target << "f" << std::endl;
		return;
	}
	if (!isNumber(target))
	{
		std::cout << "float: impossible" << std::endl;
		return;
	}
	double temp = std::atof(target.c_str());
	float value = static_cast<float>(temp);

	if (std::isnan(value))
	{
		std::cout << "float: nanf" << std::endl;
		return;
	}
	if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "float: +inff" << std::endl;
		else
			std::cout << "float: -inff" << std::endl;
		return;
	}

	std::stringstream ss;
	ss << std::fixed << std::setprecision(1) << value << "f";
	std::cout << "float: " << ss.str() << std::endl;
}

void printDouble(std::string target)
{
	if (target.length() == 1 && !std::isdigit(target[0]))
	{
		double value = static_cast<double>(target[0]);
		std::stringstream ss;
		ss << std::fixed << std::setprecision(1) << value;
		std::cout << "double: " << ss.str() << std::endl;
		return;
	}
	if (target == "nan" || target == "nanf") {
        std::cout << "double: nan" << std::endl;
        return;
    }
    if (target == "+inf" || target == "-inf" || target == "+inff" || target == "-inff") {
        std::cout << "double: " << target << std::endl;
        return;
    }
	if (!isNumber(target))
	{
		std::cout << "double: impossible" << std::endl;
		return;
	}
	double value = std::atof(target.c_str());
	if (std::isnan(value))
	{
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "double: +inf" << std::endl;
		else
			std::cout << "double: -inf" << std::endl;
		return;
	}
	std::stringstream ss;
	ss << std::fixed << std::setprecision(1) << value;
	std::cout << "double: " << ss.str() << std::endl;
}

void ScalarConverter::convert(std::string target)
{
	printChar(target);
	printInt(target);
	printFloat(target);
	printDouble(target);
}
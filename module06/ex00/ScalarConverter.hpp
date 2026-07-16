#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception> //?
#include <limits>
#include <iomanip>
#include <sstream>
#include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter& operator=(const ScalarConverter &other);
		~ScalarConverter();

		static void convert(std::string target);
};
	
bool isNumber(std::string target);
void printChar(std::string target);
void printInt(std::string target);
void printFloat(std::string target);
void printDouble(std::string target);
	
#endif
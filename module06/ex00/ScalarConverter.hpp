#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception> //?

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
	
#endif
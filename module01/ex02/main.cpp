#include <iostream>
#include <string>


int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "Memory aderss of string variable: " << &s << std::endl;
	std::cout << "Memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory adress held by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string variable: " << s << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl; 
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
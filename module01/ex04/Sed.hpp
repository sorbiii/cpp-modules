#ifndef SED_HPP
#define SED_HPP

# include <iostream>
# include <string>
# include <fstream>

bool checkArguments(std:: string filename, std::string s1);
void copyFile(std::string filename, std::string s1, std::string s2);
std::string replaceFunction(std::string line, std::string s1, std::string s2);

#endif
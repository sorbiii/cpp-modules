#include "Sed.hpp"

bool checkArguments(std::string filename, std::string s1)
{
	if (s1.empty())
	{
		std::cout << "string 1 cannot be empty" << std::endl;
		return false;
	}
	std::fstream file(filename.c_str());
	if (!file.good())
	{
		std::cout << "Error while opening the file" << std::endl;
		return false;
	}
	if (file.is_open())
	{
		if (file.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "File is open, but empty. File cannot be empty!" << std::endl;
			return false;
		}
	}
	else 
	{
		std::cout << "Error while opening the file" << std::endl;
		return false;
	}
	file.close();
	return true;
}

void copyFile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename.c_str());
	std::ofstream newFile((filename + ".replace").c_str());
	std::string s;

	while (getline(file, s))
	{
		newFile << replaceFunction(s, s1, s2) << std::endl;
		if (file.eof())
			newFile << std::endl;
	}
	file.close();
	newFile.close();
}

std::string replaceFunction(std::string line, std::string s1, std::string s2)
{
	size_t i = 0;
	
	if (line.empty())
		return line;
	
	i = line.find(s1, i);
	while ((i = line.find(s1, i)) != std::string::npos)
	{
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return line;
}
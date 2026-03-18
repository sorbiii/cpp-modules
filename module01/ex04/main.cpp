#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of arguments " << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!checkArguments(filename, s1))
		return 1;
	copyFile(filename, s1, s2);

	return 0;
}

// empty file - empty.txt
// more than one occurrence of a word in one line - one_line.txt
// more than one occurrence of a word in a file(not in a line) - simple_test.txt
// wrong extention - wrong_file.tx
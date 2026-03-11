#include <iostream>

void changeFunction(std::string txt)
{
	for (long unsigned int i = 0; i < txt.size(); i++)
	{
		txt[i] = toupper(txt[i]);
	}
	std::cout << txt;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			changeFunction(argv[i]);
			if (i + 1 < argc)
				std::cout << ' ';
		}
	}
	std::cout << "\n";
	return (0);
}

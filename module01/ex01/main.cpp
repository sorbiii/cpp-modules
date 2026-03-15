#include "Zombie.hpp"

int main(void)
{
	int n = 2;

	Zombie *rysie = zombieHorde(n, "rysiuu");
	for (int i = 0; i < n; i++)
	{
		rysie->announce();
	}
	delete[] rysie;
	return (0);
}
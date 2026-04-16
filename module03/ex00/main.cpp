#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a"); //domyślny konstruktor
	ClapTrap b(a); //kopiowanie
	ClapTrap c("c"); //domyślny
	ClapTrap d("d"); // domyślny
	c = d; //operator przypisania

	c.attack("rysiu");
	for (int i = 0; i < 9; i++)
	{
		a.attack("zygmunt");
	}
	b.attack("ryszard");
	a.beRepaired(1);
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.beRepaired(5);
	a.takeDamage(12);
	a.takeDamage(2);
	a.beRepaired(20);
}
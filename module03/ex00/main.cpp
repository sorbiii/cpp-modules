#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a"); //domyślny konstruktor
	ClapTrap b(a); //kopiowanie
	ClapTrap c("c"); //domyślny
	ClapTrap d("d"); // domyślny
	c = d; //operator przypisania

	c.attack("rysiu");
	b.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.beRepaired(1);
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.attack("zygmunt");
	a.beRepaired(5);
}
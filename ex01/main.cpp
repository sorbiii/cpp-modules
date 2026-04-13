#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("a");
	ClapTrap b("b");

	//a.takeDamage(50);
	//b.takeDamage(50);
	for (int i = 0; i < 15; i++)
	{
		a.attack("target");
	 	b.attack("another target");
	}
	a.guardGate();
	a.takeDamage(2);
	a.beRepaired(1);
}
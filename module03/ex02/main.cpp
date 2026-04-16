#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("a");
    FragTrap b("b");
    FragTrap c(b);
    a = b;
	ScavTrap scav("scav");

    for (int i = 0; i < 100)
    b.attack("zygmunt");
    b.takeDamage(50);
	b.takeDamage(40);
    b.beRepaired(20);
    b.highFivesGuys();
	scav.takeDamage(30);
	scav.takeDamage(30);

    return 0;
}
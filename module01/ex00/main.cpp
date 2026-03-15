#include "Zombie.hpp"

int main(void)
{
	Zombie *mariusz;
	randomChump("rysiuuu");
	
	mariusz = newZombie("mariusz");
	mariusz->announce();
	delete mariusz;
}
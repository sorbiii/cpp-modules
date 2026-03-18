#ifndef HUMAN_B
#define HUMAN_B

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		void attac(std::string name, std::string weapon);
		HumanB();
		~HumanB();	
};

#endif
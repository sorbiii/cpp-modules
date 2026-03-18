#ifndef HUMAN_B
#define HUMAN_B

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon;
		std::string _name;
	public:
		void attack();
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB();	
};

#endif
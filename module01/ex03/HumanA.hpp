#ifndef HUMAN_A
#define HUMAN_A

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& _weapon;
		std::string _name;
	public:
		void attack();
		HumanA(std::string name, Weapon& value);
		~HumanA();	
};

#endif
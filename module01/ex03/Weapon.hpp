#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		const std::string& getType() const;
		void setType(std::string parameter);
		Weapon(std::string type);
		~Weapon();
};

#endif
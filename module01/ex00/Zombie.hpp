#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string _name;
	public:
		void announce(void);
		Zombie(std::string _name);
		~Zombie();
	};
	
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif

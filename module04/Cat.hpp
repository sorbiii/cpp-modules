#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(std::string name);
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		virtual ~Cat();

};

#endif
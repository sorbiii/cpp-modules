#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal &other);
		AAnimal& operator=(const AAnimal &other);
		virtual ~AAnimal();

		std::string getType() const;
		void setType(std::string name);
		virtual void makeSound() const = 0;
};

#endif
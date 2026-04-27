#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //destruktor pies brain kot
    delete i;

	std::cout << '\n';

    const int count = 4; //test tablicy zwierząt
    Animal* animals[count];

    for (int k = 0; k < count / 2; k++)
		animals[k] = new Dog();
    for (int k = count / 2; k < count; k++)
		animals[k] = new Cat();
	for (int k = 0; k < count; k++)
		animals[k]->makeSound();
    for (int k = 0; k < count; k++)
		delete animals[k];

	std::cout << '\n';

    //DEEP COPY 
    Dog rys("Ryś"); //copy constructor
    Dog tmp = rys;
    std::cout << "Tmp dog" << std::endl;
    std::cout << "Rys is still alive!" << std::endl;

    std::cout << '\n';

    Dog adam("Adam"); //copy assignment operator
    Dog rex("Rex");
    adam = rex;
	std::cout << adam.getType() << std::endl;

    return 0;
}
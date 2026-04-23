#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << '\n';

	const Dog *dog = new Dog();
	const Dog *secDog = new Dog("Ryszard");
	std::cout << dog->getType() << " " << std::endl;
	std::cout << secDog->getType() << " " << std::endl;
	dog->makeSound();
	secDog->makeSound();
	//dog->setType("Zbych"); <- nie można bo jest const
	delete dog;
	delete secDog;

	std::cout << '\n';

	Cat *cat = new Cat("Krzyś");
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	cat->setType("Krzysztof");
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete cat;

	std::cout << "\n"; 

	//alokacja na stacku
	Cat secCat = Cat();
	Cat anotherCat = Cat("Miluś"); //destruktory na końcu programu
	std::cout << secCat.getType() << " " << std::endl;
	secCat.makeSound();
	std::cout << anotherCat.getType() << " " << std::endl;
	anotherCat.makeSound();

	std::cout << '\n';

	const WrongAnimal *wrong = new WrongCat();
	const WrongAnimal *bad = new WrongCat("Staś");
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << bad->getType() << " " << std::endl;
	wrong->makeSound();
	bad->makeSound();
	delete wrong;
	delete bad;

	std::cout << '\n';

	//śmieszny przypadek
	Animal grzes = Cat("Grześ");
	std::cout << grzes.getType() << " " << std::endl;
	grzes.makeSound();

	std::cout << '\n';

	return 0;
}
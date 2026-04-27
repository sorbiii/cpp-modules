#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
  //tutaj klasa abstrakcyjna gwarantuje bezpieczeństwo, że nikt nie stworzy schronisko[0] = new AAnimal()
  AAnimal *schronisko[2];
  schronisko[0] = new Dog();
  schronisko[1] = new Cat();
  for (int i = 0; i < 2; i++)
  {
    schronisko[i]->makeSound();
  }

  //AAnimal a; <- klasa abstrakcyjna
  delete schronisko[0];
  delete schronisko[1];
}
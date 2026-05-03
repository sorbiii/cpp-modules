#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Rysiu", 150);
	Bureaucrat b("Marian", 151); //to low
	Bureaucrat *c = new Bureaucrat("Zbych", 2);
	Bureaucrat d("Tadzio", -7483); //to high

	std::cout << a;
	c->incrementGrade();
	std::cout << *c;
	c->decrementGrade();
	std::cout << *c;
	c->incrementGrade();

	delete c;

}
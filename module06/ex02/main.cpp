#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

Base *generate(void)
{
	Base *t;
	int randNum = rand() % 3;
	switch (randNum)
	{
	case 0:
		return t = new A;
	case 1:
		return t = new B;
	case 2:
		return t = new C;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A: " << &a << " = " << &p << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B: " << &b << " = " << &p << std::endl;
			return;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C: " << &c << " = " << &p << std::endl;
				return;
			}
			catch (std::exception &e)
			{
				std::cout << "Class error: Unknow Error" << e.what() << std::endl;
			}
		}
	}
}

int main(void)
{
	srand(time(NULL));
	Base *p = generate();
	Base &pRef = *generate();
	identify(p);
	identify(pRef);

	delete &pRef;
	delete p;
}
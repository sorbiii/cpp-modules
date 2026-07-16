#include "Serializer.hpp"

int main()
{
	Data d;
	d.s1 = "Hello";
	d.num = 42;

	uintptr_t raw = Serializer::serialize(&d);
	std::cout << "Adress of raw in memory after serialization: " << raw << std::endl;

	Data *ptr = Serializer::deserialize(raw);
	std::cout << "Adress of raw in memory after deserialization: " << ptr << std::endl;
	std::cout << "data inside the Data d structure is untached:" << std::endl;
	std::cout << ptr->s1 << std::endl;
	std::cout << ptr->num << std::endl;

	std::cout << "check if adress matches the number" << std::endl;
	if (&d == ptr)
		std::cout << "Succes: addresses match! " << "( " << &d << " = " << ptr << " )" << std::endl;
	else
		std::cout << "Error: addresses don't match" << std::endl;

	// check with a bad pointer
	std::cout << "check if the number matches with the adress(its bad)" << std::endl;
	uintptr_t wrongRaw = raw + 4;
	Data *wrongPtr = Serializer::deserialize(wrongRaw);
	if (&d == wrongPtr)
		std::cout << "Succes: addresses match! " << "( " << &d << " = " << ptr << " )" << std::endl;
	else
		std::cout << "Error: the addresses don't match" << "( " << &d << " != " << wrongPtr << " )" << std::endl;

	return 0;
}
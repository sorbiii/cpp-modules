#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    //sprawdzenie exceptions
    try
	{
        Form high("HighLevel", 0); 
    }
	catch (std::exception &e) {
        std::cout << "Zlapano: " << e.what() << std::endl;
    }

    try {
        Form low("LowLevel", 151); 
    } catch (std::exception &e) {
        std::cout << "Zlapano: " << e.what() << std::endl;
    }

	//test podpisywania umowy
    try {
        Bureaucrat boss("Zbych", 45);        // Ranga 45
        Bureaucrat intern("Praktykant", 100); // Ranga 100
        Form contract("Umowa Najmu", 50);    // Wymaga 50 do podpisu

        std::cout << "Informacje o formularzu:\n" << contract << std::endl;

        // 1. Proba podpisu przez osobe z za niska ranga
        std::cout << "--- Proba praktykanta ---" << std::endl;
        intern.signForm(contract); 
        
        // 2. Proba podpisu przez osobe z odpowiednia ranga
        std::cout << "\n--- Proba Zbycha ---" << std::endl;
        boss.signForm(contract);

        std::cout << "\nStan formularza po probach:\n" << contract << std::endl;

    } catch (std::exception &e) {
        std::cout << "Błąd krytyczny: " << e.what() << std::endl;
    }

    return 0;
}
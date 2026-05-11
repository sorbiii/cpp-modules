#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

// void printShrubbery(std::string target)
// {
//     std::string filename = target + "_shrubbery";
//     std::ifstream file(filename.c_str());
//     if (file.is_open())
//     {
//         std::cout << "\n--- ZAWARTOŚĆ PLIKU " << filename << " ---\n" << std::endl;
//         std::cout << file.rdbuf(); // Wypisuje cały plik na ekran
//         file.close();
//         std::cout << "\n--------------------------------------\n" << std::endl;
//     }
//     else
//         std::cout << "Nie udało się otworzyć pliku do podglądu." << std::endl;
// }

int main()
{
    std::srand(std::time(NULL)); //losowość

    std::cout << "--- TEST 1: Shrubbery (Sukces) ---" << std::endl;
    try 
	{
		Bureaucrat brian("Brian", 1);
        std::string targetName = "ogrod";
        ShrubberyCreationForm tree(targetName);

        brian.signForm(tree);
        brian.executeForm(tree);
        
        //printShrubbery(targetName);
    }
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 2: Robotomy (50/50 szans) ---" << std::endl;
    try 
	{
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm robot("Target_X");
        
        boss.signForm(robot);
        boss.executeForm(robot);
        boss.executeForm(robot); // Kolejna proba
    }
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 3: Presidential Pardon (Brak uprawnien do wykonania) ---" << std::endl;
    try
	{
        Bureaucrat intern("Intern", 20); // Moze podpisac (25), ale nie wykona (5)
        PresidentialPardonForm pardon("Criminal");
        
        intern.signForm(pardon);
        intern.executeForm(pardon);
    } 
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    std::cout << "\n--- TEST 4: Brak podpisu ---" << std::endl;
    try 
	{
        Bureaucrat king("King", 1);
        PresidentialPardonForm pardon("Someone");
        
        // king.signForm(pardon); // Celowo pominiete
        king.executeForm(pardon);
    } 
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    return 0;
}
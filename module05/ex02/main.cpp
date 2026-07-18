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

    std::cout << "Shrubbery" << std::endl;
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

    std::cout << "\nRobotomy" << std::endl; //50/50
    try 
	{
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm robot("target");
        
        boss.signForm(robot);
        boss.executeForm(robot);
        boss.executeForm(robot); // druga proba dla sprawdzenia
    }
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    std::cout << "\nPresidential Pardon" << std::endl; //nie ma uprawnien
    try
	{
        Bureaucrat intern("Intern", 20); // Moze podpisac (wymagane - 25), ale nie wykona (wymagane - 5)
        PresidentialPardonForm pardon("Criminal");
        
        intern.signForm(pardon);
        intern.executeForm(pardon);
    } 
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    std::cout << "\nBrak podpisu" << std::endl;
    try 
	{
        Bureaucrat king("King", 1);
        PresidentialPardonForm pardon("Someone");
        
        // king.signForm(pardon); // Celowo pominiete - dzieki temu jest blad w terminalu
        king.executeForm(pardon);
    } 
	catch (std::exception &e) 
	{
        std::cerr << "Blad: " << e.what() << std::endl;
    }

    return 0;
}
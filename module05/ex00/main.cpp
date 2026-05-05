#include "Bureaucrat.hpp"
  
int main()
{  
    //Za wysoka ranga
    try {
        Bureaucrat b1("Zbych", 0);
        std::cout << b1 << std::endl;
    } catch (std::exception &e) {
        std::cout << "Test 1 Error: " << e.what() << std::endl;
    }
  
    //Poprawna ranga i inkrementacja do błędu
    try
    {
        Bureaucrat b2("Basia", 2);
        std::cout << b2 << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
        b2.incrementGrade();
    } catch (std::exception &e) {
        std::cout << "Test 2 Error: " << e.what() << std::endl;
    }
  
    return 0;
} 
#include <iostream>
#include <string>
#include "classes.hpp"

enum class Nationality
{
    de,
    en,
    it,
    es
};
/* 
void setNationality(Nationality nationality){
    switch(nationality)
    {
        case Nationality::de:

    }
} */


int main()
{
    Person person1;
    person1.setName("Max Mustermann", "de");

    std::string name_input;
    std::string nationality_input;
    std::cout << "Wenn Sie eine Person hinzu fügen wollen, geben Sie bitte den Namen ein:" << std::endl;
    std::cin >> name_input;
    std::cout << "Geben Sie die Nationalitaet ein (de/en/it/es): " << std::endl;
    std::cin >> nationality_input;
    Person person2;
    person2.setName(name_input, nationality_input);

    std::cout << "Ihre eingegebenen Daten lauten: " << std::endl;
    person2.getName();
    
    

    return 0;
}
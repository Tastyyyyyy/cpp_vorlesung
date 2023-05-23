#include "classes.hpp"
// #include <iostream>

void Person::setName(std::string name, std::string nationalitaet)
:   m_name(name)
,   m_nationalitaet(nationalitaet)
{}

void Person::getName(){
    std::cout << "Nationalitaet: " << m_nationality << std::endl;
    std::cout << "Name: " << m_name << std::endl;
}
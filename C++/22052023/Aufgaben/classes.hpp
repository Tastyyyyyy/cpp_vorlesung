#pragma once
#include <string>

class Person
{
    public:
    Person()
    {};

    void setName(std::string name, std::string nationality);

    void getName(); 

    ~Person()
    {};

    private:
    std::string m_name;
    std::string m_nationality;

};
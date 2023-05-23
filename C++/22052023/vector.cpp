#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> myVector;
    myVector.push_back("Hello ");
    myVector.push_back("ITA ");
    myVector.push_back("Class!");

    std::cout << myVector.size() << std::endl;

    myVector.pop_back();    // löscht letztes Element

    std::cout << myVector.at(1) << std::endl;

    for(std::string word : myVector)
{
    std::cout << word;
}

    return 0;
}
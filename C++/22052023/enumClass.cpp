#include <iostream>

using namespace std;

enum class Color
{
    red,        // 0
    yellow,     // 1
    green,      // 2
    blue        // 3
};

void printColor(Color color)
{
    switch(color)
    {
        case Color::red:
            cout << "red";
            break;
        case Color::yellow:
            cout << "yellow";
            break;
        case Color::green:
            cout << "green";
            break;
        case Color::blue:
            cout << "blue";
            break;


    }
}
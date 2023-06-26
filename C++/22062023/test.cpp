#include <iostream>
#include <string>

int test[6][6];

void fillArray()
{
    for(int z = 0; z < 6; z++)
    {
        for(int i = 0; i < 6; i++)
        {
            test[z][i] = 0;
        }
    }
}

int main()
{
    fillArray();
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++) std::cout << test[i][j] << " ";
        std::cout << std::endl;
    }
}

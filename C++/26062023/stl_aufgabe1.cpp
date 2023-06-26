#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<string> zutaten = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};
    for_each(zutaten.begin(), zutaten.end(), [](string zutat){cout << zutat << endl;});
    auto it = zutaten.begin() + 2;
    zutaten.erase(it);
    for_each(zutaten.begin(), zutaten.end(), [](string zutat){cout << zutat << endl;}); 
}
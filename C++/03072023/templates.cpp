#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

void printList(const list<string>& inList){
    for(const string& item : inList){
        cout << item << " ";
    }
    cout << endl;  
}

template <class T>                  // erlaubt es, Typen zu übergeben
void printContainer(const T& inContainer){
    for(const auto& item : inContainer){
        cout << item << " ";
    }
    cout << endl;
}

int main(){
    vector<string> myVec = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};
    printContainer(myVec);

    list<string> myList = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};   
    printContainer(myList);
    return 0;
}
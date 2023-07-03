#include <iostream>
using namespace std;

int minimumInt(int a, int b){
    if(a < b) return a;
    else return b;
}

template <class T>
T minimum(T a, T b){
    if(a < b) return a;
    else return b;
}

int main(){
    // int input_b;
    // int input_a;

    // cout << "Bitte geben Sie a ein: " << endl;
    // cin >> input_a;
    // cout << "Bitte geben Sie b ein: " << endl;
    // cin >> input_b;

    // cout << minimumInt(input_a, input_b) << " ist die kleinere Zahl" << endl;

    cout << minimum(5.4, 5.3) << " ist die kleinere Zahl" << endl;

    return 0;
}
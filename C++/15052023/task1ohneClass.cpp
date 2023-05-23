#include <iostream>
using namespace std;

struct Properties
{
    int fuel = 0;
    int consumption = 0;
    double pos = 0;
};

int main(){
    Properties myCar{50, 10, 600};
    if((myCar.fuel/myCar.consumption)*100 >= myCar.pos){
        cout << "Enough fuel" << endl;
    }
    else if((myCar.fuel/myCar.consumption)*100 < myCar.pos){
        cout << "Not enough fuel" << endl;
    }
    else{
        cout << "Error" << endl;
    }
}
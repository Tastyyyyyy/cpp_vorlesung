#include <iostream>
using namespace std;

struct ferrariDaten{
    int fuel = 0;
    int consumption = 0;
    double pos = 0;
};

class Ferrari{
    public:
    void fahren(){
        if((m_data.fuel/m_data.consumption)*100 >= m_data.pos){
            cout << "Enough fuel" << endl;
        }
        else if((m_data.fuel/m_data.consumption)*100 < m_data.pos){
            cout << "Not enough fuel" << endl;
        }
        else{
            cout << "Error" << endl;
        }
    }

    private:
    ferrariDaten m_data{50, 10, 400};
    
};

int main(){
    Ferrari myCar;
    myCar.fahren();
}
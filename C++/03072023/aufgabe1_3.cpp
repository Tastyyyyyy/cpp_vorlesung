#include <iostream>

using namespace std;

template <class T>
class Pair{
    public:
        Pair() = default;

        virtual ~Pair(){}

        void setPair(const T& a, const T& b){
            m_first = a;
            m_second = b;
        }

        T printMin(){
            if(m_first < m_second) return m_first;
            else return m_second;
        }

    private:
        T m_first;
        T m_second;
};

int main(){
    Pair<int> myPair;
    myPair.setPair(5, 8);
    cout << myPair.printMin() << " ist die kleinere Zahl" << endl;

    return 0;
}
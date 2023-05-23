#include <iostream>
#include <math.h>

bool prime(int n){
    for(int i = 2; i < (sqrt(n)+1); ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 0;
    std::cin >> n;
    if(prime(n)){
        std::cout << "Primzahl" << std::endl;
    } 
    else {
        std::cout << "Keine Primzahl" << std::endl;
    }
    return 0;
}
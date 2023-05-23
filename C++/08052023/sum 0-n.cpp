#include <iostream>

int sum(int n){
    int sum = 0;
    for(int c = 0; c <= n; c++){
        sum += c;
    }
    return sum;
}

int main() {
    int n = 0;
    int end = 0;
    std::cin >> n;
    end = sum(n);
    std::cout << end << std::endl;
    return 0;
}

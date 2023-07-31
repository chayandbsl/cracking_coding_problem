#include <iostream>

int sumOfNaturalNo(int n){
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << sumOfNaturalNo(5);
    return 0;
}
#include<iostream>

int gcd (int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm (int a, int b, int gcdResult) {
    return (long long)a / gcdResult * b;
}

int main () {
    int numberOfTest;
    int firstNum, secondNum;
    std::cin >> numberOfTest;
    for (int counter = 0; counter < numberOfTest; ++counter) {
        std::cin >> firstNum >> secondNum;
        // firstNum = 123456789, secondNum = 122456789;
        int gcdResult = gcd(firstNum, secondNum);
        std::cout << gcdResult << " " << lcm(firstNum, secondNum, gcdResult) << std::endl;
    }
    
    return 0;
}
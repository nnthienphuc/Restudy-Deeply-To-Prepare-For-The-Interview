#include<iostream>

int sum1To3NPlus1 (int n) {
    if (n % 2 == 0)
        return (1 + (3*n + 1)/2);
    return -(3*n + 1)/2;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum1To3NPlus1(n) << std::endl;

    return 0;
}
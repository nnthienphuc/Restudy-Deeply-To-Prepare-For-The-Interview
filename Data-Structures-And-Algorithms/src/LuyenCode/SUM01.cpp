#include<iostream>

long long sumOf1ToN (int n) {
    return (long long)n * (n + 1) / 2;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sumOf1ToN(n) << std::endl;

    return 0;
}
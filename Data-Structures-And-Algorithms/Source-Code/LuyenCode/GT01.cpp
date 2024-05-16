#include<iostream>

int calculateFactorial (int n) {
    if (n <= 1)
        return 1;
    return n * calculateFactorial (n -1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << calculateFactorial (n) << std::endl;

    return 0;
}
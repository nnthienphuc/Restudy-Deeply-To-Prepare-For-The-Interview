#include<iostream>

bool isPrime (int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void primeFactorization (int n) {
    if (n <= 1) {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            int counter = 0;
            while (n % i == 0) {
                ++counter;
                n /= i;
            }
            if (counter > 0)
                std::cout << i << "(" << counter << ")" << " ";
        }
    }
}

int main() {
    int numberOfTestCases;
    std::cin >> numberOfTestCases;
    for (int counter = 1; counter <= numberOfTestCases; counter++) {
        int n;
        std::cin >> n;
        std::cout << "Test " << counter << ": ";
        primeFactorization(n);
        std::cout << std::endl;
    }

    return 0;
}
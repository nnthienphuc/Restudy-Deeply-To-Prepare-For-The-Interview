#include<iostream>

bool compareFirstAndLast (int n) {
    short lastNum = n % 10;
    while (n >= 10)
        n /= 10;
    if (n == lastNum)
        return true;
    return false;
}

int main() {
    int numberOfTestCases;
    int n;
    std::cin >> numberOfTestCases;
    for (int i = 0; i < numberOfTestCases; ++i) {
        std::cin >> n;
        if (compareFirstAndLast(n))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
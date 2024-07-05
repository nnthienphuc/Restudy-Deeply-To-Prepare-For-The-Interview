#include<iostream>
#include<math.h>

int countDivisors (int n) {
    if (n == 1)
        return 1;
    int divisorCounter = 1;
    for (int counter = 2; counter <= n; ++counter)
        if (n % counter == 0)
            ++divisorCounter;
    return divisorCounter;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << countDivisors(abs(n)) << std::endl;

    return 0;
}
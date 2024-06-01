#include<iostream>

int calculateCombination (int k, int n) {
    long long result = 1;
    for (int counter = n - k + 1; counter <= n; ++counter)
        result *= counter;
    for (int counter = 2; counter <= k; ++counter)
        result /= counter;

    return result;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::cout << calculateCombination(k, n) << std::endl;

    return 0;
}
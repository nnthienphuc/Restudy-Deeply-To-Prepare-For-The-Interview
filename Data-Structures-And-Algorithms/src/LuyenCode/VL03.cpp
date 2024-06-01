#include<iostream>

long long sum2ToNPlus2N (int n) {
    return (long long)n * (n+1) / 2 - 1 + 2*n;
}

int main () {
    int n;
    std::cin >> n;
    std::cout << sum2ToNPlus2N(n) << std::endl;

    return 0;
}
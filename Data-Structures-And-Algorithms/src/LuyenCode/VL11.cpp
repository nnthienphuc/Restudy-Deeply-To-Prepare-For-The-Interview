#include<iostream>
#include<math.h>

bool isPrime (long long n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    long long n;
    std::cin >> n;
    if (isPrime(n))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    
    return 0;
}
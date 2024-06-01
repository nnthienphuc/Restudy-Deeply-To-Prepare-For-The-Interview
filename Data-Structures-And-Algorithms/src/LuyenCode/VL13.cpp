#include<iostream>

bool isPerfectNumber (int n) {
    if (n <= 3)
        return false;
    int sum = 0;
    for (int counter = 1; counter < n; counter++)
        if (n % counter == 0)
            sum += counter;
    if (sum == n)
        return true;
    return false;
}

int main() {
    int n;
    std::cin >> n;
    if (isPerfectNumber(n))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    
    return 0;
}
#include<iostream>
#include<iomanip>

double findSum (double x, int n) {
    double numerator = x;
    int denominator = 1;
    double result = numerator / denominator;
    for (int counter = 2; counter <= n; ++counter) {
        numerator *= x;
        denominator *= counter;
        result += (numerator / denominator);
    }

    return result;
}

int main() {
    int n;
    double x;
    std::cin >> x >> n;
    std::cout << std::fixed << std::setprecision(2) << findSum(x, n) << std::endl;
}
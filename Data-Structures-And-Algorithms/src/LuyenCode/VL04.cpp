#include<iostream>
#include<iomanip>

double sum1Per2To1PerN (int n) {
    double sum = 0.0;
    for (int denominator = 2; denominator <= n; ++denominator)
        sum += (1.0/denominator);

    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(4) << sum1Per2To1PerN(n) << std::endl;

    return 0;
}
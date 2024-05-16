#include<iostream>
#include<iomanip>

#define PI 3.14

int main() {
    double radius;
    std::cin >> radius;
    std::cout << std::fixed << std::setprecision(3) << radius * 2 * PI << " ";
    std::cout << std::fixed << std::setprecision(3) << radius * radius * PI << std::endl;

    return 0;
}
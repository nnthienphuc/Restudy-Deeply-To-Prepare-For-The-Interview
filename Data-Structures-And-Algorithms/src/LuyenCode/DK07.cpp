#include<iostream>
#include<iomanip>
#include<math.h>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                std::cout << "WOW";
            else
                std::cout << "NO";
        }
        else {
            if (c == 0)
                std::cout << 0;
            else
                std::cout << std::fixed << std::setprecision(2) << -(double)c / b;
        }
    }
    else {
        double delta = (double)b * b - 4 * a * c;
        if (delta < 0)
            std::cout << "NO";
        else if (delta == 0) {
            double x = -(double)b / (2 * a);
            if (x == 0)
                std::cout << 0;
            else
                std::cout << std::fixed << std::setprecision(2) << x;
        }
        else {
            std::cout << std::fixed << std::setprecision(2) << (-(double)b - sqrt(delta)) / (a * 2) << " ";
            std::cout << std::fixed << std::setprecision(2) << (-(double)b + sqrt(delta)) / (a * 2);
        }
    }
}
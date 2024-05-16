#include<iostream>
#include<iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a == 0) {
        if (b == 0)
            std::cout << "WOW" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    else {
        if (b == 0)
            std::cout << 0 << std::endl;
        else
            std::cout << std::fixed << std::setprecision(2) << - 1.0 * b / a << std::endl;
    }

    return 0;
}
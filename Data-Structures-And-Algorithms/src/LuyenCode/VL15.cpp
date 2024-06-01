#include<iostream>
#include<math.h>

int findGCD (int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a%b);
}

void shortenFraction (int a, int b) {
    int gcd = findGCD(abs(a), abs(b));
    a = a / gcd;
    b = b / gcd;
    if (b == 0) {
        std::cout << "INVALID" << std::endl;
        return;
    }
    if (a == 0 || b == 1) {
        std::cout << a << std::endl;
        return;
    }
    if (b == -1) {
        std::cout << -a << std::endl;
        return;
    }
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
        std::cout << abs(a) << " " << abs(b) << std::endl;
    else
        std::cout << -abs(a) << " " << abs(b) << std::endl;
    return;
}

int main () {
    int a, b;
    std::cin >> a >> b;
    shortenFraction(a, b);

    return 0;
}
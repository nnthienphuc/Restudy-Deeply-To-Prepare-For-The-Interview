#include<iostream>
#include<math.h>

int findGCD (int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a%b);
}

int findLCM (int a, int b) {
    return a * b / findGCD(a, b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << findLCM(abs(a), abs(b)) << std::endl;

    return 0;
}
#include<iostream>
#include<math.h>

int findGCD (int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a%b);
}

int main () {
    int a, b;
    std::cin >> a >> b;
    a = abs(a);
    b = abs(b);
    std::cout << findGCD(a, b) << std::endl;

    return 0;
}
#include<iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    for (int counter = a; counter <= b; ++counter) {
        std::cout << counter << " ";
    }

    return 0;
}
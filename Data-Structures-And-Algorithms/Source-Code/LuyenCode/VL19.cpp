#include<iostream>

void printOutTheNumbersDivisibleBy3 (int a, int b) {
    bool flag = false;
    for (int counter = b-1; counter > a; --counter)
        if (counter % 3 == 0) {
            std::cout << counter << " ";
            flag = true;
        }
    if (flag) {
        std::cout << std::endl;
        return;
    }
    std::cout << "NOT FOUND" << std::endl;
    return;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    printOutTheNumbersDivisibleBy3(a, b);

    return 0;
}
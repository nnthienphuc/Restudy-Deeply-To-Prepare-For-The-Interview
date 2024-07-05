#include<iostream>

int calculateSumOfEvenNumbers (int a, int b) {
    int result = 0;
    for (int counter = a; counter <= b; ++counter)
        if (counter % 2 == 0)
            result += counter;

    return result;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << calculateSumOfEvenNumbers(a, b) << std::endl;

    return 0;
}
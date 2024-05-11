#include <iostream>

bool isIncreasing (std::string inputString) {
    for (int i = 0; i < inputString.length() - 1; i++) {
        if (inputString[i] > inputString[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isDecreasing (std::string inputString) {
    for (int i = 0; i < inputString.length() - 1; i++) {
        if (inputString[i] < inputString[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string inputString;
    std::cin >> inputString;
    if (isIncreasing(inputString) || isDecreasing(inputString))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
#include<iostream>

int main() {
    double inputNumber;
    std::cin >> inputNumber;
    
    double decimalPart = inputNumber - (int)inputNumber;
    if (inputNumber > 0) {
        if (decimalPart >= 0.5)
            std::cout << (int)inputNumber + 1 << std::endl;
        else
            std::cout << (int)inputNumber << std::endl;
    }
    else
    {
        if (decimalPart <= -0.5)
            std::cout << (int)inputNumber - 1 << std::endl;
        else
            std::cout << (int)inputNumber << std::endl;
    }

    return 0;
}
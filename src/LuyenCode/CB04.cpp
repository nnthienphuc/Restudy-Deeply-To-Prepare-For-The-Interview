#include<iostream>
#include<iomanip>

int main() {
    short firstNum, secondNum;
    std::cin >> firstNum >> secondNum;
    std::cout << std::fixed << std::setprecision(2) << firstNum + secondNum << std::endl;
    std::cout << std::fixed << std::setprecision(2) << firstNum - secondNum << std::endl;
    std::cout << std::fixed << std::setprecision(2) << firstNum * secondNum << std::endl;
    if (secondNum == 0)
        std::cout << "ERROR" << std::endl;
    else {
        if (firstNum == 0)
            std::cout << 0 << std::endl;
        else
            std::cout << std::fixed << std::setprecision(2) << 1.0 * firstNum / secondNum << std::endl;
    }

    return 0;
}
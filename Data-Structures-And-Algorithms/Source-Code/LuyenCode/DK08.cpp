#include<iostream>
#include<iomanip>

int main() {
    double firstNum, secondNum;
    char calculation;
    std::cin >> firstNum >> calculation >> secondNum;
    switch (calculation)
    {
    case '+':
        std::cout << std::fixed << std::setprecision(2) << firstNum + secondNum;
        break;
    case '-':
        std::cout << std::fixed << std::setprecision(2) << firstNum - secondNum;
        break;
    case '*':
        std::cout << std::fixed << std::setprecision(2) << firstNum * secondNum;
        break;
    case '/':
        if (secondNum == 0)
            std::cout << "Math Error";
        else if (firstNum == 0)
            std::cout << 0.00;
        else
            std::cout << std::fixed << std::setprecision(2) << firstNum / secondNum;
    default:
        break;
    }
}
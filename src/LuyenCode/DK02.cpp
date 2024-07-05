#include<iostream>

int main() {
    int firstNum, secondNum, thirdNum;
    std::cin >> firstNum >> secondNum >> thirdNum;
    std::cout << (firstNum >= secondNum ? (firstNum >= thirdNum ? firstNum : thirdNum) : (secondNum >= thirdNum ? secondNum : thirdNum)) << std::endl;

    return 0;
}
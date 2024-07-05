#include<iostream>

int main() {
    unsigned int firstNum, secondNum;
    std::cin >> firstNum >> secondNum;
    
    std::cout << firstNum - secondNum * (firstNum/secondNum) << std::endl;

    return 0;
}
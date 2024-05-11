#include<iostream>
#include<string>

bool checkCorrectOperation(std::string str) {
    if (str.size() > 9)
        return false;
    if ((str[0] - '0') + (str[4] - '0') == (str[8] - '0'))
        return true;
    return false;
}

int main() {
    std::string operation;
    std::getline(std::cin, operation);
    if (checkCorrectOperation(operation))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}
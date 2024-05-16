#include<iostream>
#include<string>

int countTheNumberOfDigitsOfN (std::string n) {
    int counter = 0;
    if (n[0] == '-')
        return n.size() - 1;
    return n.size();

    return counter;
}

int main () {
    std::string n;
    std::cin >> n;
    std::cout << countTheNumberOfDigitsOfN(n) << std::endl;

    return 0;
}
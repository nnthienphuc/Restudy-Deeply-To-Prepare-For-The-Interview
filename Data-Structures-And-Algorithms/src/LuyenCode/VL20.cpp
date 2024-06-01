#include<iostream>
#include<cctype>

void printLetters (char a, char b) {
    for (char i = a; i <= b; i++) {
        std::cout << (char)toupper(i) << " ";
    }
    std::cout << std::endl;
    return;
}

int main() {
    char a, b;
    std::cin >> a >> b;
    printLetters(a, b);

    return 0;
}
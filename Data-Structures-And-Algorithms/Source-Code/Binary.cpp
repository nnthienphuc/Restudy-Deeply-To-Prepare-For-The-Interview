#include<iostream>
#include<math.h>
#include<iomanip>

int bitsStringCounter = 0;
bool flag = true;

void generateInitialBitsString(int n, int bitsStringsArray[]) {
    for (int i = 0; i < n; ++i)
        bitsStringsArray[i] = 0;
}

void printRecentBitsString(int n, int bitsStringsArray[]) {
    std::cout << std::setw(2) << bitsStringCounter++ << ": " "[";
    for (int counter = 0; counter < n; ++counter) {
        std::cout << bitsStringsArray[counter];
        if (counter < n - 1)
            std::cout << "   ";
    }
    std::cout << "]";
    std::cout << std::endl;
}

void generateNextBitsString(int n, int bitsStringsArray[]) {
    int bitCounter = n-1;
    while (bitCounter >= 0 && bitsStringsArray[bitCounter]) {
        bitsStringsArray[bitCounter] = 0;
        --bitCounter;
    }
    if (bitCounter >= 0)
        bitsStringsArray[bitCounter] = 1;
    else
        flag = false;
}

void generateBitsStrings(int n, int bitsStringsArray[]) {
    generateInitialBitsString(n, bitsStringsArray);
    while (flag) {
        printRecentBitsString(n, bitsStringsArray);
        generateNextBitsString(n, bitsStringsArray);
    }

}

int main() {
    int n = 0;
    std::cout << "Enter N(N < 100) = ";
    std::cin >> n;
    int bitsStringsArray[n];
    std::cout << "---------------------\n";
    generateBitsStrings(n, bitsStringsArray);
}

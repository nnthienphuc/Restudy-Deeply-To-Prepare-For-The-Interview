#include<iostream>
#include<iomanip>

bool flag = true;
int permutationCounter = 1;

void swapTwoElements (int &element1, int &element2) {
    int temp = element1;
    element1 = element2;
    element2 = temp;
}

void generateInitialPermutation (int permutationArray[], int n) {
    std::cout << "Enter the permutation array:\n";
    for (int counter = 0; counter < n; counter++)
        std::cin >> permutationArray[counter];
}

void printRecentPermutationArray (int permutationArray[], int n) {
    std::cout << std::setw(2) << permutationCounter++ << ": [";
    for (int counter = 0; counter < n; counter++) {
        std::cout << permutationArray[counter];
        if (counter < n - 1)
            std::cout << "   ";
    }
    std::cout << "]" << std::endl;
}

void generateNextPermutationArray (int permutationArray[], int n) {
    int i = n - 2;
    while (i >= 0 && permutationArray[i] > permutationArray[i + 1])
        --i;
    if (i >= 0) {
        int k = n - 1;
        while (permutationArray[i] > permutationArray[k])
            --k;
        swapTwoElements(permutationArray[i], permutationArray[k]);
        int r = i + 1;
        int s = n - 1;
        while (r <= s)
            swapTwoElements(permutationArray[r++], permutationArray[s--]);
    }
    else
        flag = false;
}

void generatePermutationArray (int permutationArray[], int n) {
    generateInitialPermutation(permutationArray, n);
    while (flag) {
        printRecentPermutationArray(permutationArray, n);
        generateNextPermutationArray(permutationArray, n);
    }
}

int main () {
    int n;
    std::cout << "Enter n = ";
    std::cin >> n;
    if (n <= 0) {
        std::cerr << "Invalid input for n" << std::endl;
        return 1;
    }
    int permutationArray[n];

    generatePermutationArray(permutationArray, n);

    return 0;
}
#include<iostream>
#include<iomanip>

bool flag = true;
int combinedCounter = 1;

int binarySearch (int arr[], int size, int key) {
    int mid = size / 2;
    if (key == arr[mid])
        return mid;
    else if (key < arr[mid]) {
        for (int counter = 0; counter < mid; counter++) {
            if (arr[counter] == key)
                return counter;
        }
    }
    else {
        for (int counter = mid + 1; counter < size; counter++) {
            if (arr[counter] == key)
                return counter;
        }
    }
    return -1;
}

void generateInitialCombinedSubArray (int combinedArray[], int k, int combinedSubArray[]) {
    for (int counter = 0; counter < k; ++counter)
        combinedSubArray[counter] = combinedArray[counter];
}

void printRecentCombinedSubArray (int k, int combinedSubArray[]) {
    std::cout << std::setw(2) << combinedCounter++ << ": [";
    for (int counter = 0; counter < k; ++counter) {
        std::cout << combinedSubArray[counter];
        if (counter < k - 1)
            std::cout << "   ";
    }
    std::cout << "]";
    std::cout << std::endl;
}

void generateNextCombinedSubArray (int n, int combinedArray[], int k, int combinedSubArray[]) {
    int elementCounter = k - 1;
    while (combinedSubArray[elementCounter] == combinedArray[n - k + elementCounter] && elementCounter >= 0)
        --elementCounter;
    if (elementCounter >= 0) {
        int currentPosition = binarySearch(combinedArray, n, combinedSubArray[elementCounter]);
        combinedSubArray[elementCounter] = combinedArray[currentPosition + 1];
        for (int nextElement = elementCounter + 1; nextElement < k; ++nextElement)
            combinedSubArray[nextElement] = combinedArray[(currentPosition + 1) + (nextElement - elementCounter)];
    }
    else
        flag = false;
}

void generateCombinedSubArray (int n, int combinedArray[], int k, int combinedSubArray[]) {
    generateInitialCombinedSubArray(combinedArray, k, combinedSubArray);
    while (flag) {
        printRecentCombinedSubArray(k, combinedSubArray);
        generateNextCombinedSubArray(n, combinedArray, k, combinedSubArray);
    }
}

int main() {
    int n;
    std::cout << "Enter n = ";
    std::cin >> n;
    if (n <= 0) {
        std::cerr << "Invalid input for n" << std::endl;
        return 1;
    }
    int combinedArray[n];
    std::cout << "Enter the combined array:\n";
    for (int counter = 0; counter < n; ++counter)
        std::cin >> combinedArray[counter];

    int k;
    std::cout << "Enter k = ";
    std::cin >> k;
    if (k <= 0 || k > n) {
        std::cerr << "Invalid input for k" << std::endl;
        return 1;
    }
    int combinedSubArray[k];

    generateCombinedSubArray(n, combinedArray, k, combinedSubArray);

    return 0;
}
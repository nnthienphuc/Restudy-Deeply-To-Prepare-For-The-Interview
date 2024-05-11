#include<iostream>

bool checkSymmetry(int arr[], int size) {
    for (int i = 0; i < size/2; ++i)
        if (arr[i] != arr[size - 1 - i])
            return false;
    return true;
}

int main() {
    int numberOfTestCases;
    std::cin >> numberOfTestCases;
    for (int counter = 0; counter < numberOfTestCases; ++counter) {
        int numberOfElements;
        std::cin >> numberOfElements;
        int arr[numberOfElements];
        for (int i = 0; i < numberOfElements; ++i)
            std::cin >> arr[i];
            
        if (checkSymmetry(arr, numberOfElements))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
// https://luyencode.net/problem/vt03

#include<iostream>

void inputArray (int n, int arr[]) {
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}

int findMaxPosition (int n, int arr[]) {
    int max = arr[0];
    int maxPosition = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            maxPosition = i;
        }
    }
    
    return maxPosition;
}

int main () {
    int n;
    std::cin >> n;
    int arr[n];
    inputArray (n, arr);
    
    std::cout << findMaxPosition(n, arr) << std::endl;

    return 0;
}
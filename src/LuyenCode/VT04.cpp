// https://luyencode.net/problem/vt04

#include<iostream>

void inputArray (int n, int arr[]) {
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}

bool isExist (int n, int arr[], int key) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == key)
            return true;
    return false;
}

int main () {
    int n;
    int key;
    std::cin >> n >> key;
    int arr[n];
    inputArray (n, arr);
    
    if (isExist (n, arr, key))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
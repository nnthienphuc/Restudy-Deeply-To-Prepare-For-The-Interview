// https://luyencode.net/problem/vt05

#include<iostream>

void inputArray (int n, int arr[]) {
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}

int countSameValue (int n, int arr[], int x) {
    int counter = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == x)
            ++counter;
    
    return counter;
}

int main () {
    int n;
    int x;
    std::cin >> n >> x;
    int arr[n];
    inputArray (n, arr);

    std::cout << countSameValue (n, arr, x) << std::endl;

    return 0;
}
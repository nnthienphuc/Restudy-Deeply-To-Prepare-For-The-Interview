// https://luyencode.net/problem/vt01

#include<iostream>

int findMaxValue (int n, int arr[]) {
    int max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];
    
    std::cout << findMaxValue(n, arr) << std::endl;
}

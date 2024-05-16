// https://luyencode.net/problem/vt02

#include<iostream>

int findMaxValue (int n, int arr[]) {
    int max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int findSecondMaxValue (int n, int arr[], int max) {
    int secondMax = -1000000001;
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if ((arr[i] > secondMax) && (arr[i] != max)) {
            secondMax = arr[i];
            flag = true;
        }
    }

    if (flag == false) {
        return -1;
    }
    return secondMax;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = findSecondMaxValue (n, arr, findMaxValue (n, arr));
    if (result == -1)
        std::cout << "NOT FOUND" << std::endl;
    else
        std::cout << result << std::endl;
    
    return 0;
}
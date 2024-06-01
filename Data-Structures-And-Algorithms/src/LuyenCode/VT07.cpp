// https://luyencode.net/problem/vt07

#include<iostream>

void inputArray (int n, int arr[]) {
    for (int i = 1; i < n; i++)
        std::cin >> arr[i];
}

void isExist (int n, int arr[]) {
    int counter = 0;
    int rightPosition[n-2];
    for (int i = 1; i < (n - 1); ++i) {
        if (arr[n-1] == arr[i])
            rightPosition[counter++] = i;
    }
    if (counter == 0)
        std::cout << "-1" << std::endl;
    else {
        for (int i = 0; i < counter; ++i)
            std::cout << rightPosition[i] << " ";
        std::cout << std::endl;
    }
}

int main () {
    int n = 12;
    int arr[n];
    inputArray(n, arr);

    isExist(n, arr);

    return 0;
}
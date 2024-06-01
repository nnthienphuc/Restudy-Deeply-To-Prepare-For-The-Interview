// https://luyencode.net/problem/vt06

#include<iostream>
#include<iomanip>

void inputArray (int n, int arr[]) {
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}

double calculateTheAverageOfOddElements (int n, int arr[]) {
    int counter = 0;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            ++counter;
            sum += arr[i];
        }
    }
    
    if (sum == 0.0)
        return 0.0;
    return sum / counter;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    inputArray (n, arr);
    
    std::cout << std::setprecision(4) << std::fixed << calculateTheAverageOfOddElements (n, arr) << std::endl;

    return 0;
}
#include<iostream>
#include<cmath>

bool checkPrime (long long x) {
    if (x < 2)
        return false;
    for (long long i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

// bool checkTPrimes (long long x) {
//     int counter = 0;
//     for (long long i = 2; i <= x / 2; ++i) {
//         if (x % i == 0)
//             ++counter;
//         if (counter > 1)
//             return false;
//     }

//     if (counter == 1)
//         return true;
//     return false;
// }

bool checkTPrimes (long long x) {
    int sqrtX = sqrt(x);
    if (checkPrime(sqrtX) && (sqrtX * sqrtX) == x)
        return true;
    return false;
}

void printResult (long long arr[], int size) {
    for (int i = 0; i < size; ++i)
        if (checkTPrimes(arr[i]))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
}

int main() {
    int n;
    std::cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];
    
    printResult (arr, n);

    return 0;
}
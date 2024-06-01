#include<iostream>

int findMaxNumber (int N) {
    int sum = 3;
    int counter = 3;
    for (; sum <= N; ++counter)
        sum += counter;
    return counter-2;
}

int main() {
    int N;
    std::cin >> N;
    std::cout << findMaxNumber(N) << std::endl;

    return 0;
}
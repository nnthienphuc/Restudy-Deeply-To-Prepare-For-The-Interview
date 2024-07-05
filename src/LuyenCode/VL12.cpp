#include<iostream>
#include<math.h>

void listTheDivisors (int n) {
    if (n == 0) {
        std::cout << "INF" << std::endl;
        return;
    }
    n = abs(n);
    for (int counter = n; counter >= 1; --counter)
        if (n % counter == 0)
            std::cout << counter << " ";
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    listTheDivisors(n);

    return 0;
}
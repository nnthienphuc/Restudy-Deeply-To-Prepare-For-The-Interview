#include<iostream>

int main () {
    int year;
    std::cin >> year;
    if (year <= 0 || year > 100000)
        std::cout << "INVALID";
    else
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            std::cout << "YES";
        else
            std::cout << "NO";
    }

    return 0;
}

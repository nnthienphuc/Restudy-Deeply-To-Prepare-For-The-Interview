#include<iostream>
#include<math.h>

int main() {
    long long inputNumber;
    long long sqrtResult;
    std::cin >> inputNumber;

    sqrtResult = sqrt(inputNumber); // Nhung phep tinh co sai so thi nen tao 1 bien de luu tru gia tri cua no
    if (inputNumber < 0)
        std::cout << "NO" << std::endl;
    else {
        if (inputNumber == sqrtResult * sqrtResult)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    
    return 0;
}
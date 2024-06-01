#include<iostream>
#include<string>

void findTheReverseNumber (std::string n) {
    int size = n.size();
    while(n[size-1] == '0') {
        n.erase(size-1);
        --size;
    }
    std::string temp = n;
    for (int counter = 0; counter < size; ++counter)
        temp[counter] = n[size-counter-1];
    std::cout << temp << std::endl;
}

int main() {
    std::string n;
    std::cin >> n;
    findTheReverseNumber(n);

    return 0;
}
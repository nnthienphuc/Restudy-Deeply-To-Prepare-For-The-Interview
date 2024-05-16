#include<iostream>
#include<fstream>
#include<string>

int main() {
    std::fstream myFile;

    // write to file
    // myFile.open("testSource.txt", std::ios::out);
    // if (myFile.is_open()) {
    //     myFile << "Hello, This is a first line!\n";
    //     myFile << "This is a second line!\n";
    //     std::cout << "testSource.txt has been written!\n";
    //     myFile.close();
    // }

    // append to file
    // myFile.open("testSource.txt", std::ios::app);
    // if (myFile.is_open()) {
    //     myFile << "Append some text!\n";
    //     myFile.close();
    // }

    // read from file
    // myFile.open("testSource.txt", std::ios::in);
    // if (myFile.is_open()) {
    //     std::string line;
    //     while (getline(myFile, line)) {
    //         std::cout << line << std::endl;
    //     }
    //     myFile.close();
    // }

    // read integers from file
    myFile.open("day100so.txt", std::ios::in);
    int max = 100;
    if (myFile.is_open()) {
        int arrayOfIntegers[max];
        int counter = 0;
        while (myFile >> arrayOfIntegers[counter++]);
        for (counter = 0; counter < max; ++counter)
            std::cout << arrayOfIntegers[counter] << std::endl;
    }

    return 0;
}
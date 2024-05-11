#include<iostream>
int moveCounter = 1;

void moveDisks (int numberOfDisks, char sourcePeg, char destinationPeg, char auxiliaryPeg) {
    if (numberOfDisks == 1)
        std::cout << moveCounter++ << ": Move disk 1 from " << sourcePeg << " to " << destinationPeg << std::endl;
    else {
        moveDisks (numberOfDisks - 1, sourcePeg, auxiliaryPeg, destinationPeg);
        std::cout << moveCounter++ << ": Move disk " << numberOfDisks << " from " << sourcePeg << " to " << destinationPeg << std::endl;
        moveDisks (numberOfDisks - 1, auxiliaryPeg, destinationPeg, sourcePeg);
    }
}

int main () {
    int numberOfDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numberOfDisks;
    moveDisks (numberOfDisks, 'A', 'C', 'B');
    return 0;
}
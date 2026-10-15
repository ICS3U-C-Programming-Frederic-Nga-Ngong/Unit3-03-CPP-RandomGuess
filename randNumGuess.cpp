// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Your Name
// Date: Month Day, Year
// Write what this program does.

#include <cstdlib>
#include <iostream>

int main() {
    int number;
    // declare integer to hold random number

    int someRandomNumber;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 1 and 100

    someRandomNumber = rand() % 10 + 1;

    std::cout << "Enter a number\n";
    std::cin >> number;
    if (number == someRandomNumber) {
        std::cout << "you entered the correct number";
    } else {
            std::cout << "\nSorry, you entered the wrong number" << std::endl;
            std::cout <<"The correct one was " << someRandomNumber;}
}

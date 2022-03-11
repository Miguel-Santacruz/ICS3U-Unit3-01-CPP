// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: March 2022
// This program calculates the sum of two integers
//    inputted by the user and shows the calculation

#include <iostream>

int main() {
    // This function calculates the sum of two integers

    int Integer1;
    int Integer2;
    int Sum;

    // Input
    std::cout << "Enter the first number to add (Integer): ";
    std::cin >> Integer1;
    std::cout << "Enter the second number to add (Integer): ";
    std::cin >> Integer2;

    // Process
    Sum = Integer1 + Integer2;

    // Output
    std::cout << std::endl;
    std::cout << Integer1 << " + " << Integer2 << " = " << Sum << std::endl;
    std::cout << std::endl;
    std::cout << "Done" << std::endl;
}

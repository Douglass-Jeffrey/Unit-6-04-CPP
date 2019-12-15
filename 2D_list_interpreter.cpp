// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

// Created by: Douglass Jeffrey
// Created on: Dec 2019
// This function generates random numbers in a 2D list then prints the average

#include <iostream>
#include <ctime>


template <int rows, int columns>
float calculate(float(&arrayOfNumbers)[rows][columns]) {
    // This function averages the random numbers in the 2D list

    // Variables
    float sum = 0;
    float divisor = 0;
    float averagedNum;

    // Process
    for (size_t rowNum = 0; rowNum < rows; ++rowNum) {
        for (size_t columnNum = 0; columnNum < columns; ++columnNum) {
            sum = sum + arrayOfNumbers[rowNum][columnNum];
            divisor += 1;
        }
    }


    averagedNum = sum/divisor;
    return averagedNum;
}


int main() {
    // This function generates random numbers in a 2D list
    // then prints the average

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables
    float randomNumber;
    const int rows = 3;
    const int columns = 3;
    float numberArray[rows][columns];
    float average;
    // No input because CPP needs to knopw list parameters from the beginning
    // Process
    for (int rowNum = 0; rowNum < rows; rowNum++) {
        std::cout << "Row " << rowNum + 1 << ":" << std::endl;
        for (int columnNum = 0; columnNum < columns; columnNum++) {
            randomNumber = rand_r(&seed) % 50;
            numberArray[rowNum][columnNum] = randomNumber;
            std::cout << "Column " << columnNum + 1 << ": " << randomNumber
                      << std::endl;
        }
        std::cout << "" << std::endl;
    }

    average = calculate(numberArray);

    // Output
    std::cout << "The averages value of the numbers is: " << average
              << std::endl;
}

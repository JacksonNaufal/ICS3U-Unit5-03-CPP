// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>

float GradeConversion(std::string gradeLevel) {
     float gradePercentage;

     if (gradeLevel == "4+") {
        gradePercentage = 97.5;
     } else if (gradeLevel == "4") {
        gradePercentage = 90.5;
     } else if (gradeLevel == "4-") {
        gradePercentage = 83.0;
     } else if (gradeLevel == "3+") {
        gradePercentage = 78.0;
     } else if (gradeLevel == "3") {
        gradePercentage = 74.5;
     } else if (gradeLevel == "3-") {
        gradePercentage = 71.0;
     } else if (gradeLevel == "2+") {
        gradePercentage = 68.0;
     } else if (gradeLevel == "2") {
        gradePercentage = 65.5;
     } else if (gradeLevel == "2-") {
        gradePercentage = 61.0;
     } else if (gradeLevel == "1+") {
        gradePercentage = 58.0;
     } else if (gradeLevel == "1") {
        gradePercentage = 54.5;
     } else if (gradeLevel == "1-") {
        gradePercentage = 51.0;
     } else if (gradeLevel == "R") {
        gradePercentage = 39.5;
    } else {
        gradePercentage = -1.0;
    }
    return gradePercentage;
}

main() {
    std::string userLevel;
    float convertedLevel;

        // input
    std::cout << "Enter your grade!: ";
    std::cin >> userLevel;

    convertedLevel = GradeConversion(userLevel);

    if (convertedLevel == -1) {
        std::cout << "Invalid Input";
    } else {
        std::cout << "The level" << userLevel << "is a "
        << convertedLevel << std::endl;
    }

        std::cout << "\nDone." << std::endl;
}

// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program takes the level of grade and returns the middle percentage mark

#include <iostream>
#include <string>

int gradeCalculator(std::string gradeString) {
    // this function converts the levels to percentage mark
    int grade;

    if (gradeString == "4+") {
        grade = 97;
    } else if (gradeString == "4") {
        grade = 90;
    } else if (gradeString == "4-") {
        grade = 83;
    } else if (gradeString == "3+") {
        grade = 78;
    } else if (gradeString == "3") {
        grade = 75;
    } else if (gradeString == "3-") {
        grade = 71;
    } else if (gradeString == "2+") {
        grade = 68;
    } else if (gradeString == "2") {
        grade = 65;
    } else if (gradeString == "2-") {
        grade = 61;
    } else if (gradeString == "1+") {
        grade = 58;
    } else if (gradeString == "1") {
        grade = 55;
    } else if (gradeString == "1-") {
        grade = 51;
    } else if (gradeString == "R") {
        grade = 30;
    } else {
        return -1;
    }

    return grade;
}


main() {
    // this function gets length and width
    int completedGradeCalculator;
    std::string gradeString;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> gradeString;
    std::cout << std::endl;

    // call functions
    completedGradeCalculator = gradeCalculator(gradeString);


    // output
    if (completedGradeCalculator == -1) {
        std::cout << "Level " << gradeString << " is not a valid level."
                             << std::endl;
    } else {
        std::cout << "Level " << gradeString << " has a middle percentage of "
                             << completedGradeCalculator << "%" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}

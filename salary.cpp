// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program gives a bonus of 5 percent of yearly salary

#include <iostream>

int main() {
    // this function gives a bonus of 5 percent of yearly salary
    const int BONUS_YEARS = 5;
    const float BONUS_PERCENT = 0.05;
    float salary;
    float yearOfService;
    float bonus;

    // input
    std::cout << "Please, enter your salary: ";
    std::cin >> salary;
    std::cout << "" << std::endl;

    std::cout << "Please, enter your years of service: ";
    std::cin >> yearOfService;
    std::cout << "" << std::endl;

    // process
    if (yearOfService > BONUS_YEARS) {
        bonus = BONUS_PERCENT * salary;
        // output
        std::cout << "You are eligible for bonus! The net bonus is: "
                  << ""
                  << bonus << "" << std::endl;
    } else {
        std::cout << "Sorry, you are not eligible for the 5 percent bonus. "
        <<  "" << std::endl;
    }
    std::cout << "\nDone.";
}

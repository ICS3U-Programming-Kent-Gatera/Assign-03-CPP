// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 17 - 22
// This program shows net salary increases for long term employees

#include <iostream>
#include <string>

int main() {
    // defining variables
    std::string userSalaryStr;
    std::string timeWorkedStr;
    int timeWorked;
    int userSalary;

    try {
        // input and checking if the input is a number
        std::cout << "What is your current salary?: $";
        std::cin >> userSalaryStr;
        userSalary = std::stoi(userSalaryStr);
        std::cout << "How long have you worked here?: ";
        std::cin >> timeWorkedStr;
        timeWorked = std::stoi(timeWorkedStr);
        if (userSalary || timeWorked <= 0) {
            std::cout << "Please input a valid number";
            // process and output
            } else if (timeWorked >= 5) {
                std::cout << "Your new salary is: $";
                std::cout << userSalary * 0.05 + userSalary << std::endl;
                std::cout << "Your net salary increase is: $";
                std::cout << userSalary * 0.05 << std::endl;
        } else {
            std::cout << "you are not eligible for an increase" << std::endl;}
    } catch (std::invalid_argument) {
        std::cout << "Please input a valid number";
    }
}

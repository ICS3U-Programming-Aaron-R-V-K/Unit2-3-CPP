// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: Feb 28, 2025
// This program calculates the cost of a pizza
// Based on its diameter, labour cot, rent, and ingredients cost

#include <iomanip>
#include <iostream>

// Define constants
const float LABOUR_COST = 0.75;
const float RENTAL = 1.00;
const float INGREDIENTS = 0.50;
const float HST = 0.13;

int main() {
    // Input from the user, of the diameter
    int diameter;
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Calculations of the subtotal, tax and total
    float subtotal = LABOUR_COST + RENTAL + INGREDIENTS * diameter;
    float tax = HST * subtotal;
    float total = subtotal + tax;

    // Output of the total cost of the pizza
    // Set precision to 2 decimal places
    std::cout << std::fixed << std::setprecision(2) <<
    std::setfill('0') << total << "\n";
    std::cout << "Total: $" << total << std::endl;
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include "hwexpressions.h"  // Include the header for the functions
#include <iomanip>  // For setting decimal precision in output

int main() {
    // Declare variables
    double meal_amount, tip_rate, tip_amount, tax_amount, total;

    // Get the meal amount from the user
    std::cout << "Enter the meal amount: $";
    std::cin >> meal_amount;

    // Get the sales tax amount using the function
    tax_amount = get_sales_tax_amount(meal_amount);

    // Get the tip rate from the user
    std::cout << "Enter the tip rate (in percentage, e.g., 15 for 15%): ";
    std::cin >> tip_rate;

    // Convert tip rate to decimal (e.g., 15 -> 0.15)
    tip_rate /= 100;

    // Get the tip amount using the function
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    // Calculate the total amount
    total = meal_amount + tax_amount + tip_amount;

    // Display the receipt
    std::cout << std::fixed << std::setprecision(2);  // Set decimal precision to 2
    std::cout << "\nReceipt\n";
    std::cout << "------------------------\n";
    std::cout << "Meal Amount:       $" << meal_amount << "\n";
    std::cout << "Sales Tax:         $" << tax_amount << "\n";
    std::cout << "Tip Amount:        $" << tip_amount << "\n";
    std::cout << "Total:             $" << total << "\n";

    return 0;
}

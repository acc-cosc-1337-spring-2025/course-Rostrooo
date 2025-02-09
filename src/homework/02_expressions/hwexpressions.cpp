#include "hwexpressions.h"

// Constant tax rate
const double TAX_RATE = 0.0675;

// Function to calculate the sales tax based on meal amount
double get_sales_tax_amount(double meal_amount) {
    return meal_amount * TAX_RATE;
}

// Function to calculate the tip amount based on meal amount and tip rate
double get_tip_amount(double meal_amount, double tip_rate) {
    return meal_amount * tip_rate;
}

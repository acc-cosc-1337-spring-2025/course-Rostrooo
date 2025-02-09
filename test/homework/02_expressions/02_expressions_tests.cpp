#include "hwexpressions.h"
#include <cassert>
#include <iostream>

int main() {
    // Test Case 1: Test Get Sales Tax
    assert(get_sales_tax_amount(10) == 0.675);  // 10 * 0.0675 = 0.675
    assert(get_sales_tax_amount(20) == 1.35);   // 20 * 0.0675 = 1.35

    // Test Case 2: Test Get Tip Amount
    assert(get_tip_amount(20, 0.15) == 3);      // 20 * 0.15 = 3
    assert(get_tip_amount(20, 0.20) == 4);      // 20 * 0.20 = 4

    std::cout << "All tests passed!" << std::endl;

    return 0;
}

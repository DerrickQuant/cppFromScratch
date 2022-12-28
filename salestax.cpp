#include <iostream>
int main()
{
    float amountDue, sellingPrice, stateSalesTax, citySalesTax, LuxuryTax, luxuryItem, salesTax;

    std::cout << "Please enter the selling price of the item" << std::endl;
    std::cin >> sellingPrice;
    std::cout << "is the item a luxury item. Enter 1 for yes and 2 for no." << std::endl;
    std::cin >> luxuryItem;
    if (luxuryItem == 1)
        LuxuryTax = 0.1 * sellingPrice;
    else
        LuxuryTax = 0;
    stateSalesTax = 0.04 * sellingPrice;
    citySalesTax = 0.015 * sellingPrice;
    salesTax = stateSalesTax + citySalesTax + LuxuryTax;
    amountDue = salesTax + sellingPrice;
    std::cout << "sales tax = " << salesTax << std::endl;
    std::cout << "amount Due = " << amountDue << std::endl;
}
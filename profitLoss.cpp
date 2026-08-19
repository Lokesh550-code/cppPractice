#include <iostream>

int main () {

    float cost, sellingPrice, result;
    std::string type;

    std::cout << "Enter the cost price of the goods: ";
    std::cin >> cost;
    std::cout << "Enter the selling price of the goods: ";
    std::cin >> sellingPrice;

    if(cost > sellingPrice) {
        result = cost - sellingPrice;
        std::cout << "The transaction ended in a loss of " << result << " rs. \n";
    }

    if(cost < sellingPrice) {
        result = sellingPrice - cost;
        std::cout << "The transaction ended in a profit of " << result << " rs. \n";
    }

    return 0;
}
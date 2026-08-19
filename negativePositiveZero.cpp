#include <iostream>
 
int main () {

    float num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num == 0) {
        std::cout << num << " is zero \n";
    } else if (num > 0) {
        std::cout << num << " is positive \n";
    } else {
        std::cout << num << " is negative \n";
    }

    return 0;
}
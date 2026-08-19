#include <iostream>

int main () {

    int num;

    std::cout << "Enter a number between  1 to 12: ";
    std::cin >> num;

    if(num <= 0 || num > 12) {
        std::cout << "Please enter a valid number \n";
    } else if (num == 2) {
        std::cout << "Number of days in the given month are either 28 or 29 \n";
    } else if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12) {
        std::cout << "Number of days in the given month are 31 \n";
    } else {
        std::cout << "Number of days in the given month are 30 \n";
    }


    return 0;
}
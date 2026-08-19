#include <iostream>

int main () {

    int year;

    std::cout << "Enter the year number: ";
    std::cin >> year;

    if(year % 4 == 0 && year % 100 != 0) {
        std::cout << "The year is a leap year \n";
    } else if (year % 400 == 0) {
        std::cout << "The year is a leap year \n"; 
    } else {
        std::cout << "The year is not a leap year \n";
    }

    return 0;
}
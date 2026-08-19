#include <iostream>

int main () {

    int a, b, c;

    std::cout << "Enter the value of 1st angle: ";
    std::cin >> a;
    std::cout << "Enter the value of 2nd angle: ";
    std::cin >> b;
    std::cout << "Enter the value of 3rd angle: ";
    std::cin >> c;

    if((a + b + c) != 180 ) {
        std::cout << "The given triangle is not valid. \n";
    } else {
        std::cout << "The given triangle is valid. \n";
    }

    return 0;
}
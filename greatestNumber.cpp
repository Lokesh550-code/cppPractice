#include <iostream>

int main () {

    float x, y, z;

    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    std::cout << "Enter the third number: ";
    std::cin >> z;


    if(x > y && x > z) {
        std::cout << x << " is the greatest number" << std::endl;
    } else if (y < z) {
        std::cout << y << " is the greatest number" << std::endl;
    } else {
        std::cout << y << " is the greatest number" << std::endl;
    }

    return 0;
}
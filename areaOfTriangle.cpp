#include <iostream>
#include <cmath>

int main()
{
    double side1, side2, side3, semiPerimeter, area;

    std::cout << "Enter the length of the first side in cm: ";
    std::cin >> side1;
    std::cout << "Enter the length of the second side in cm: ";
    std::cin >> side2;
    std::cout << "Enter the length of the third side in cm: ";
    std::cin >> side3;

    semiPerimeter = (side1 + side2 + side3) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    std::cout << "The area is " << area;

    return 0;
}
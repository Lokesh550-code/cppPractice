#include <iostream>

double calculateCircumference (double radius);
double calculateArea (double radius);

int main () {
    double radius, area, circumference;


    std::cout<< "Enter the radius of the circle in cm: ";
    std::cin >> radius;

    circumference = calculateCircumference(radius);
    area = calculateArea(radius);

    std::cout << "The circumference of the circle whose radius is " << radius << " cm is " << circumference << " cm \n";
    std::cout << "The area of the circle whose radius is " << radius << " cm is " << area << " cm \n";

    return 0;
}

double calculateCircumference (double radius) {
    const double PI = 3.14;
    return 2*PI*radius;
}

double calculateArea (double radius) {
    const double PI = 3.14;
    return PI*radius*radius;
}
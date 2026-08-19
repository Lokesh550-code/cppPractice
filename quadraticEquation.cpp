#include <iostream>
#include <cmath>

int main () {
    float a, b, c, positiveRoot, negativeRoot;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of c: ";
    std::cin >> c;

    if((b*b) - 4*a*b < 0) {
        std::cout << "The equation has no real roots";
        return 0;
    }

    positiveRoot = (-b + sqrt((b*b) - 4*a*c))/(2*a); 
    negativeRoot = (-b - sqrt((b*b) - 4*a*c))/(2*a);

    std::cout << "The rootes of the given quadretic equation is " << positiveRoot << " and " << negativeRoot << '\n';

    return 0;
}
#include <iostream>

int main () {

    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    while (b != 0) {
        int temp = b; 
        b = a % b;
        a = temp; 
    }

    std::cout << "The gcd is: " << a << '\n';
    return 0;
}
#include <iostream>

int main () {

    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "The 1st power of " << num << " is " << num << '\n';
    std::cout << "The 2nd power of " << num << " is " << num*num << '\n';
    std::cout << "The 3rd power of " << num << " is " << num*num*num << '\n';

    return 0;
}
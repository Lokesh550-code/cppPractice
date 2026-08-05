#include <iostream>

int main () {

    char character;
    int asciiValue;

    std::cout << "Enter the character whose ASCII value you want: ";
    std::cin >> character;

    asciiValue = (char) character; 

    std::cout << "The ASCII value of " << character << " is " << asciiValue << " \n";

    return 0;
}
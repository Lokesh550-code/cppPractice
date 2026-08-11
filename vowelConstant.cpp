#include <iostream>

int main () {
    char c;

    std::cout << "Enter a charcter: ";
    std::cin >> c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u') {
        std::cout << c << " is vowel" << '\n';
    } else {
        std::cout << c << " is consonent" << '\n';
    }
}
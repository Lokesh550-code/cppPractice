#include <iostream>

int main() {
    char c;
    int ascii = (int) c;

    std::cout << "Enter an alphabet: ";
    std::cin >> c;
    
    if((c >= 65 && c <= 90)  || (c >= 97 && c <= 122)) {
        std::cout << c <<" is an alphabet \n";
    } else {
        std::cout << c <<" is not an alphabet \n";
    }

    return 0;
}
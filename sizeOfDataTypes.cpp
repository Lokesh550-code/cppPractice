#include <iostream>
#include <string>

int main()
{

    int intType;
    long longType;
    float floatType;
    std::string stringType;
    char charType;
    double doubleType;
    bool boolType;

    std::cout << "The size of int is: " << sizeof(intType) << '\n';
    std::cout << "The size of long is: " << sizeof(longType) << '\n';
    std::cout << "The size of float is: " << sizeof(floatType) << '\n';
    std::cout << "The size of double is: " << sizeof(doubleType) << '\n';
    std::cout << "The size of string is: " << sizeof(stringType) << '\n';
    std::cout << "The size of char is: " << sizeof(charType) << '\n';
    std::cout << "The size of boolean is: " << sizeof(boolType) << '\n';

    return 0;
}
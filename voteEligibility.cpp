#include <iostream>

int main () {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "You are old enough to vote \n";
    } else {
        std::cout << "You are not old enough to vote \n";
    }

    return 0;
}
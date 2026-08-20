#include <iostream>
int main () {

    int num, reverseNumber = 0;

    std::cout << "Enter an integer";
    std::cin >> num;

    if (num > 0 ) {
        std::cout << "Enter a positive number";
        return 0;
    } 

    if(num%10 == 0) {
        std::cout << "Enter a number which is not divisible by 10";
        return 0;
    }

    while (num > 0) {
        reverseNumber = reverseNumber*10 + num%10;
        num = num/10;
    }

    std::cout << reverseNumber;

    return 0;
}
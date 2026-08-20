#include <iostream>
#include <string>
#include <cmath>

int main () {

    int num, numLength, temp = 0, copy, res = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;
    copy = num;

    numLength = std::to_string(num).length();

    while (num != 0) {
        temp = num%10;
        res += pow(temp, numLength);
        num = num/10;
    }

    if (res == copy) {
        std::cout << "The number is armstrtong";
    } else {
        std::cout << "The number is not armstrtong";
    }

    return 0;
}
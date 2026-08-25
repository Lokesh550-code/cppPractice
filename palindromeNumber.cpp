#include <iostream>
#include<string>

int main () {
    int num, j, numLength;
    bool isPalindrome = true;
    std::string numString;
    std::cout << "Enter a number: ";
    std::cin >> num;

    numString = std::to_string(num);
    numLength = numString.length();
    j = numLength - 1;

    for(int i = 0; i < numLength/2; i++) {
        if(numString[i] != numString[j]) {
            isPalindrome = false;
            break;
        }
        j--;
    }

    if(isPalindrome) {
        std::cout << "The given number is palindrome";
    } else {
        std::cout << "The given number is not palindrome";
    }

    return 0;
}

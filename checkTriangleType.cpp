#include <iostream>

int main()
{

    float s1, s2, s3;
    std::string result;

    std::cout << "Enter the length of first side: ";
    std::cin >> s1;
    std::cout << "Enter the length of second side: ";
    std::cin >> s2;
    std::cout << "Enter the length of third side: ";
    std::cin >> s3;

    if(s1 == s2 && s2 == s3) {
        result = "Equilateral";
    } else if (s1 == s2 || s2 == s3) {
        result = "Isosceles";
    } else {
        result = "Scalene";
    }

    std::cout << "The given trinalge is an " << result << " triangle. \n";

    return 0;
}
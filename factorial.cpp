#include <iostream>

int main()
{

    int num, fact = 1;

    std::cout << "Enter a positive number: ";
    std::cin >> num;

    if (num == 1 || num == 0)
    {
        fact = 1;
        std::cout << "The factorial of " << num << " is " << fact;
        return 0;
    }
    else if (num < 0)
    {
        std::cout << "Please enter a positive number :/";
        return 0;
    }

    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    std::cout << "The factorial of " << num << " is " << fact;
    return 0;
}
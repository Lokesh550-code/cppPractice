#include <iostream>
int main()
{

    int amount, hundered = 0, fifty = 0, twenty = 0, ten = 0;

    std::cout << "Enter the amount: ";
    std::cin >> amount;

    do
    {
        if (amount >= 100)
        {
            amount -= 100;
            hundered++;
        }
        if (amount >= 50)
        {
            amount -= 50;
            fifty++;
        }
        if (amount >= 20)
        {
            amount -= 20;
            twenty++;
        }
        if (amount >= 10)
        {
            amount -= 10;
            ten++;
        }
    } while (amount >= 10);

    std::cout << "The amount has " << hundered << " hundered rs. " << fifty << " fifty rs." << twenty << " twenty rs. " << ten << " ten rs. notes.";

    return 0;
}
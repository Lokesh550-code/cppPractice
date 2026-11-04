#include <iostream>

int main()
{

    int arr[11] = {2, 5, 6, 8, 10, 12, 34, 65, 90, 100, 120};
    int high, low, mid, length, target;

    low = 0;
    length = sizeof(arr) / sizeof(arr[0]);
    high = length - 1;
    mid = (low + high) / 2;

    std::cout << "Enter the element you want to search: ";
    std::cin >> target;

    while (true)
    {
        if (target == arr[mid])
        {
            std::cout << "The target is at index: " << mid;
            break;
        }

        if (target > arr[mid])
        {
            low = mid + 1;
        }

        if (target < arr[mid])
        {
            high = mid - 1;
        }
    }

    return 0;
}
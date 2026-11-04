#include <iostream>

int main()
{
    int arr[5] = {2, 3, 3, 1, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        bool unique = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                unique = true;
                break;
            }
        }

        if (!unique)
        {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}
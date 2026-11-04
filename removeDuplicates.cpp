#include <iostream>

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};

    int length = sizeof(arr) / sizeof(int);
    int j;
    for (int i = 0; i < length; i++)
    {
        j = i + 1;
        for (j; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < length - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                length--;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

#include <bits/stdc++.h>

int main()
{
    int n = 5;
    int array[n] = {1, 2, 3, 4, 5};
    int x = 3;
    // int left = 0;
    // int right = n - 1;

    // while (left <= right)
    // {
    //     int key = (left + right) / 2;
    //     if (array[key] == x)
    //     {
    //         break;
    //     }
    //     if (array[key] < x)
    //     {
    //         left = key + 1;
    //     }
    //     else
    //     {
    //         right = key - 1;
    //     }
    // }
    int k = 0;
    for (int b = n / 2; b >= 1; b = b / 2)
    {
        while (k + b < n && array[k + b] <= x)
        {
            k += b;
        }
    }
    if (array[k] == x) {
        // x found at index k
    }
}
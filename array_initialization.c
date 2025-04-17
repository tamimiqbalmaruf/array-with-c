#include <stdio.h>

int main()
{
    int x = 10;
    
    int arr[5] = {10, 20, 30, 40, 50}; // array declare aand initialize
    int arr2[] = {10, 20, 30, 40, 50}; // without size
    int arr3[5] = {0}; // 0 for all value

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
};
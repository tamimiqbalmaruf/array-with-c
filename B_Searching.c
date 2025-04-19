#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, x;
    bool isMatch = false;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            isMatch = true;
            break;
        }
    }

    if (!isMatch)
    {
        printf("%d", -1);
    }

    return 0;
};
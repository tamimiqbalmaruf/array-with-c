#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int inx, val;
    scanf("%d %d", &inx, &val);

    for (int i = n; i >= inx; i--)
    {
        if (inx == i)
        {
            a[i] = val;
            // break;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
};
#include <stdio.h>

int main()
{
    int n, v;
    scanf("%d", &n);

    int positiveSum = 0;
    int negativeSum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);

        if (v > 0)
        {
            positiveSum += v;
        }else{
            negativeSum += v;
        }
    };

    printf("%d %d", positiveSum, negativeSum);

    return 0;
};
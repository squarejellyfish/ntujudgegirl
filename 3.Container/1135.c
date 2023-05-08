#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 1)
    {
        n /= 2;
        printf("%d\n", arr[n]);
    }
    else
    {
        n /= 2;
        int ans = lround((float)(arr[n] + arr[n - 1]) / 2);
        printf("%d\n", ans);
    }

    return 0;
}
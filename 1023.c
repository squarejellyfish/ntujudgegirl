#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int *spot = (int *)malloc(sizeof(int) * n);
    int max = -100000, maxi, min = 1000000, mini;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &spot[i]);
        if (spot[i] > max)
        {
            max = spot[i];
            maxi = i + 1;
        }
        if (spot[i] < min)
        {
            min = spot[i];
            mini = i + 1;
        }
    }
    printf("%d %d\n", maxi, max);
    printf("%d %d\n", mini, min);

    return 0;
}

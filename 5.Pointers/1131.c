#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *ratings = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ratings[i]);
    }
    int mid;
    (n % 2 == 0) ? (mid = n / 2 - 1) : (mid = n / 2);
    if (k > ratings[mid])
    {
        printf("%d\nWINNER WINNER CHICKEN DINNER!\n", ratings[mid]);
    }
    else
    {
        printf("%d\nBETTER LUCK NEXT TIME!\n", ratings[mid]);
    }

    return 0;
}

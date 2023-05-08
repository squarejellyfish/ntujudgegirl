#include <stdio.h>
#include <stdlib.h>

int sum_square(n)
{
    if (n == 1)
        return 1;

    return n * n + sum_square(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", sum_square(n));

    return 0;
}
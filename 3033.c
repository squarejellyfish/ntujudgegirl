#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, d, n;
    scanf("%d %d %d", &a1, &d, &n);

    int sum = a1;
    (a1 < 0) ? printf("(%d)", a1) : printf("%d", a1);
    for (int i = 0; i < n - 1; i++)
    {
        a1 += d;
        (a1 < 0) ? printf(" + (%d)", a1) : printf(" + %d", a1);
        sum += a1;
    }
    printf(" = %d\n", sum);

    return 0;
}
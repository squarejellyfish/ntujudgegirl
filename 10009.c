#include <stdio.h>
#include <stdlib.h>

int gcd(a, b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        int t = a;
        a = b;
        b = t % b;
    }
    return a;
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == 0)
        {
            printf("%d / %d\n", a, b);
            continue;
        }
        int divisor = gcd(a, b);
        printf("%d / %d\n", a / divisor, b / divisor);
    }

    return 0;
}
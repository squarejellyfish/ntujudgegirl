#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (!n)
        return 1;
    return n * fact(n - 1);
}

int C(int n, int m)
{
    return fact(n) / (fact(m) * fact(n - m));
}

int P(int n, int m)
{
    return fact(n) / fact(n - m);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (m > n)
    {
        printf("0\n0\n");
        return 0;
    }

    printf("%d\n%d\n", P(n, m), C(n, m));

    return 0;
}
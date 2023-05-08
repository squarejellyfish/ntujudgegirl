#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (!n)
        return 1;
    return n * fact(n - 1);
}

int P(int n, int m)
{
    return fact(n) / fact(n - m);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", P(n, m));

    return 0;
}
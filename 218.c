#include <stdio.h>
#include <stdlib.h>

long fact(int n)
{
    if (!n)
    {
        return 1;
    }
    return n * fact(n - 1);
}

long C(int n, int k)
{
    return fact(n) / (fact(n - k) * fact(k));
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    long sum = 0;
    for (int i = 0; i < m + 1; i++)
    {
        sum += C(n, i);
    }
    printf("%ld\n", sum);

    return 0;
}
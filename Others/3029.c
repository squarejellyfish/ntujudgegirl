#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (!n)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    float n;
    int check = scanf("%f", &n);

    while (!n || n < 0 || check != 1 || n != (int)n)
    {
        if (check != 1)
        {
            char dump[100];
            scanf("%s", dump);
        }
        check = scanf("%f", &n);
    }

    long sum = 0;
    n = (int)n;
    for (int i = 1; i < n + 1; i++)
    {
        sum += fact(i);
    }
    printf("%ld\n", sum);

    return 0;
}
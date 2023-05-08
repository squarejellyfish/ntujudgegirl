#include <stdio.h>
#include <stdlib.h>

void return2num(int n, int *factRst, int *sumRst)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    *factRst = fact;
    *sumRst = sum;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int factRst, sumRst;

    return2num(n, &factRst, &sumRst);
    printf("%d\n%d", factRst, sumRst);

    return 0;
}

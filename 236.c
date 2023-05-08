#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b)
    {
        int t = a;
        a = b;
        b = t % b;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int last, curr;
    scanf("%d", &last);
    while (scanf("%d", &curr) != EOF)
    {
        last = lcm(last, curr);
    }
    printf("%d\n", last);

    return 0;
}

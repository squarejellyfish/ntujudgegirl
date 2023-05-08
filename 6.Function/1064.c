#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    int ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int f = fact(n);

    printf("%d", f);

    return 0;
}

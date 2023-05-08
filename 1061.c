#include <stdio.h>

int sum(int n)
{
    int ret = 0;
    for (int i = 1; i <= n; i++)
    {
        ret += i;
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int s = sum(n);

    printf("%d", s);

    return 0;
}

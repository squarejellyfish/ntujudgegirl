#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, mod;
    scanf("%d", &n);
    if (n % 7 == 0)
    {
        printf("YES\n");
        return 0;
    }

    while (n != 0)
    {
        mod = n % 10;
        if (mod == 7)
        {
            printf("YES\n");
            return 0;
        }
        n /= 10;
    }

    printf("NO\n");
    return 0;
}

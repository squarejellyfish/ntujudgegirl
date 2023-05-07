#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p = 1, rev = 0;
    while (p > 0)
    {
        for (int i = 0; i < (n - p) / 2; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < p; i++)
        {
            printf("*");
        }
        puts("");
        if (!rev)
        {
            p += 2;
            if (p == n)
                rev = 1;
        }
        else
        {
            p -= 2;
        }
    }

    return 0;
}
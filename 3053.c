#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            if (j == i - 1)
            {
                printf("*");
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

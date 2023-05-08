#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < count)
            {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
        count++;
    }

    return 0;
}

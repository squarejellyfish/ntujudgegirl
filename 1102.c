#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d\n%d", &m, &n);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

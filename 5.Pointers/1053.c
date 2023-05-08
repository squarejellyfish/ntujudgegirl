#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *classes[3];
    for (int i = 0; i < 3; i++)
    {
        classes[i] = (int *)malloc(sizeof(int) * (i + 1));
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            scanf("%d", &classes[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", classes[i][j]);
        }
        puts("");
    }

    return 0;
}

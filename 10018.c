#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *dict = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n; i++)
    {
        dict[i] = 0;
    }

    int num;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        dict[num]++;
    }

    int max = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (dict[i] > dict[max])
        {
            max = i;
        }
    }
    printf("%d\n", max);

    return 0;
}
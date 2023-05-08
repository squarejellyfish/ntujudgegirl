#include <stdio.h>
#include <stdlib.h>

int main()
{
    int curr, bills[7] = {0}, table[7] = {1000, 500, 100, 50, 10, 5, 1};
    while (scanf("%d", &curr) != EOF)
    {
        for (int i = 0; i < 7; i++)
        {
            bills[i] = curr / table[i];
            curr = curr % table[i];
        }

        for (int i = 0; i < 7; i++)
        {
            if (!i)
            {
                printf("%d", bills[i]);
                continue;
            }
            printf(" %d", bills[i]);
        }
        puts("");
    }

    return 0;
}
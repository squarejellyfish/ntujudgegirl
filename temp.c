#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int even[n], odd[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even[i] = num;
            odd[i] = -1;
        }
        else
        {
            odd[i] = num;
            even[i] = -1;
        }
    }
    int printed = 0;
    for (int i = 0; i < n; i++)
    {
        if (odd[i] != -1)
        {
            if (!printed)
            {
                printf("%d", odd[i]);
                printed = 1;
            }
            else
            {
                printf(" %d", odd[i]);
            }
        }
    }
    printf("\n");
    printed = 0;
    for (int i = 0; i < n; i++)
    {
        if (even[i] != -1)
        {
            if (!printed)
            {
                printf("%d", even[i]);
                printed = 1;
            }
            else
            {
                printf(" %d", even[i]);
            }
        }
    }

    return 0;
}

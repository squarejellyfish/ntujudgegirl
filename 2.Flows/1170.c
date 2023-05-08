#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max, maxi = -1, min, mini = -1, last_max = -1, last_min = -1;
    for (int i = 0; i < n; i++)
    {
        int curr;
        scanf("%d", &curr);

        if (maxi == -1)
        {
            max = curr;
            min = curr;
            maxi = i;
            mini = i;
            continue;
        }

        if (curr > max)
        {
            max = curr;
            maxi = i;
            last_max = -1;
            continue;
        }
        if (curr < min)
        {
            min = curr;
            mini = i;
            last_min = -1;
            continue;
        }
        if (curr == max)
        {
            last_max = i;
        }
        if (curr == min)
        {
            last_min = i;
        }
    }
    (last_max != -1) ? printf("%d %d %d\n", max, maxi + 1, last_max + 1) : printf("%d %d\n", max, maxi + 1);
    (last_min != -1) ? printf("%d %d %d\n", min, mini + 1, last_min + 1) : printf("%d %d\n", min, mini + 1);

    return 0;
}
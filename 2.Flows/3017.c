#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0;
    int count = 0, max, maxi, flag = 0;

    while (1)
    {
        int curr;
        scanf("%d", &curr);
        if (curr == -1)
            break;

        sum += curr;
        if (!flag)
        {
            max = curr;
            maxi = count + 1;
            flag = 1;
        }

        if (curr > max)
        {
            max = curr;
            maxi = count + 1;
        }
        count++;
    }
    printf("%.0f\n%.1f\n%d\n%d\n", sum, sum / count, max, maxi);

    return 0;
}
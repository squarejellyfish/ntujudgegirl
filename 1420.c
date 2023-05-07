#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float curr, sum = 0;
    while (1)
    {
        int ret = scanf("%f", &curr);
        if (!ret)
        {
            char dummy[1024];
            scanf(" %s", dummy);

            if (strcmp(dummy, "q") == 0)
            {
                break;
            }
            else
                continue;
        }
        int int_part = curr / 1;
        sum += curr - int_part;
    }
    printf("%.2f\n", sum);

    return 0;
}
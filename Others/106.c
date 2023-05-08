#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[1000];
    while (1)
    {
        int last, sum3 = 0, sum_odd = 0, sum_even = 0, pos = 1;
        scanf(" %s", line);
        if (strcmp(line, "-1") == 0)
            break;
        for (int i = 0; i < strlen(line); i++)
        {
            int curr_digit = line[i] - 48;
            sum3 += curr_digit;
            if (pos % 2 == 0)
            {
                sum_even += curr_digit;
            }
            else
            {
                sum_odd += curr_digit;
            }
            pos++;
            last = curr_digit;
        }
        (last % 2 == 0) ? printf("yes") : printf("no");
        (sum3 % 3 == 0) ? printf(" yes") : printf(" no");
        (last % 5 == 0) ? printf(" yes") : printf(" no");
        ((sum_even - sum_odd) % 11 == 0) ? printf(" yes\n") : printf(" no\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dec_to_bi(int n, char arr[7])
{
    int i = 0;
    while (n)
    {
        char this;
        int r = n % 2;

        if (r == 1)
        {
            this = '1';
        }
        else
        {
            this = '0';
        }
        arr[i] = this;

        n /= 2;
        i++;
    }
}

int main()
{
    while (1)
    {
        char curr[1024];
        scanf(" %[^\n]", curr);

        if (strcmp(curr, "-1") == 0)
        {
            break;
        }

        for (int i = 0; i < strlen(curr); i++)
        {
            int curr_char = (int)curr[i];
            char biarr[7] = "0000000";
            dec_to_bi(curr_char, biarr);

            for (int i = 6; i >= 0; i--)
            {
                printf("%c", biarr[i]);
            }
            printf(",");
        }
        puts("");
    }

    return 0;
}
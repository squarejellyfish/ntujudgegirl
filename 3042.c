#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decode(char curr[1024])
{
    for (int i = 0; i < strlen(curr); i++)
    {
        if (curr[i] < 'A' || (curr[i] > 'Z' && curr[i] < 'a') || (curr[i] > 'z'))
        {
            printf("%c", curr[i]);
            continue;
        }

        int curr_char = (int)curr[i] - 3;

        if (curr_char < 65 || (curr_char < 97 && curr_char > 90))
        {
            curr_char += 26;
        }
        if (curr_char > 64 && curr_char < 91)
        {
            curr_char += 32;
        }
        printf("%c", curr_char);
    }
}

int main()
{
    char curr[30][1024];
    int n = 0;
    while (1)
    {
        scanf(" %s", curr[n]);
        if (curr[n][0] == '-')
            break;

        n++;
    }
    int printed = 0;
    for (int i = 0; i < n; i++)
    {
        if (!printed)
        {
            decode(curr[i]);
            printed = 1;
            continue;
        }

        printf(" ");
        decode(curr[i]);
    }
    puts("");

    return 0;
}
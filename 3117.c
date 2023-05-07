#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char curr[1024];
    while (1)
    {
        scanf(" %[^\n]", curr);
        if (curr[0] == '-')
            break;

        for (int i = 0; i < strlen(curr); i++)
        {
            if (curr[i] == 'b')
            {
                printf("d");
                continue;
            }
            else if (curr[i] == 'd')
            {
                printf("b");
                continue;
            }
            else if (curr[i] == 'p')
            {
                printf("q");
                continue;
            }
            else if (curr[i] == 'q')
            {
                printf("p");
                continue;
            }

            printf("%c", curr[i]);
        }
        puts("");
    }

    return 0;
}
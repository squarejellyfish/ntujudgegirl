#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char curr[127];

    char ans[30][256];
    int c = 0, b = 0;
    while (scanf(" %s", curr) != EOF)
    {
        if (strcmp(curr, "of") == 0 || strcmp(curr, "and") == 0 ||
            strcmp(curr, "the") == 0 || strcmp(curr, "at") == 0)
        {
            continue;
        }
        if (curr[strlen(curr) - 1] == '.')
        {
            if (strcmp(curr, "at.") == 0 || strcmp(curr, "of.") == 0 ||
                strcmp(curr, "and.") == 0 || strcmp(curr, "the.") == 0)
            {
                ans[b][c] = '\0';
                b++;
                c = 0;
                continue;
            }
            ans[b][c] = toupper(curr[0]);
            ans[b][c + 1] = '\0';
            b++;
            c = 0;
        }
        else
        {
            ans[b][c] = toupper(curr[0]);
            c++;
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%s\n", ans[i]);
    }

    return 0;
}

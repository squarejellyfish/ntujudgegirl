#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max = -1;
    char ans[100];
    for (int i = 0; i < n; i++)
    {
        char curr[100];
        scanf(" %s", curr);

        int sum = 0;
        for (int j = 0; j < strlen(curr); j++)
        {
            char c = toupper(curr[j]);
            printf("%c", c);
            sum += c - 64;
        }
        printf(" = %d\n", sum);
        if (max == -1)
        {
            max = sum;
            strcpy(ans, curr);
            continue;
        }
        if (sum > max)
        {
            max = sum;
            strcpy(ans, curr);
            continue;
        }
        if (sum == max && strcmp(curr, ans) < 0)
        {
            strcpy(ans, curr);
        }
    }
    for (int i = 0; i < strlen(ans); i++)
    {
        printf("%c", toupper(ans[i]));
    }
    printf(" is the key.\n");

    return 0;
}

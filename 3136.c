#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev(char *str)
{
    for (int j = strlen(str) - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char **employees = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        employees[i] = (char *)malloc(sizeof(char) * 10);
    }

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", employees[i]);
    }
    int check;
    scanf("%d", &check);

    for (int i = 0; i < n; i++)
    {
        if (!i)
        {
            strrev(employees[i]);
            continue;
        }

        printf(" ");
        strrev(employees[i]);
    }
    puts("");

    strrev(employees[check - 1]);
    puts("");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char colon[1024], comma[1024];
    char arr[50][20];
    scanf(" %s", colon);
    scanf(" %[^\n]", comma);
    char *p = strtok(colon, ";");
    int n = 0;
    while (p != NULL)
    {
        strcpy(arr[n], p);
        p = strtok(NULL, ";");
        n++;
    }
    p = strtok(comma, ",");
    while (p != NULL)
    {
        strcpy(arr[n], p);
        p = strtok(NULL, ",");
        n++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char temp[20];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
            else if (strcmp(arr[i], arr[j]) == 0)
            {
                strcpy(arr[j], " ");
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i], " ") == 0)
            continue;
        (i == 0) ? printf("%s", arr[i]) : printf(" %s", arr[i]);
    }

    return 0;
}
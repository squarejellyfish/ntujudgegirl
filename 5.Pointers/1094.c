#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return strcmp(a, b);
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * 20);
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int swap = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                swap = 1;
                char temp[20];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
        if (!swap)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    puts("");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][20];

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", arr[i]);
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
        }
    }

    for (int i = 0; i < n; i++)
    {

        printf("%s ", arr[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strings[64][40];
    int c = 0, i = 0;

    while (1)
    {
        char curr;
        int check = scanf("%c", &curr);
        if (check == EOF)
        {
            break;
        }
        strings[c][i] = curr;
        i++;
        if (curr == '\n')
        {
            strings[c][i] = '\0';
            c++;
            i = 0;
        }
    }

    for (int i = 0; i < c - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < c; j++)
        {
            if (strcmp(strings[j], strings[min]) < 0)
            {
                min = j;
            }
        }
        if (i == min)
            continue;
        char temp[40];
        strcpy(temp, strings[i]);
        strcpy(strings[i], strings[min]);
        strcpy(strings[min], temp);
    }

    for (int i = 0; i < c; i++)
    {
        printf("%s", strings[i]);
    }

    return 0;
}

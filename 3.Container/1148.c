#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name;
    int a, b, c;
    int NT[26] = {0}, AA[26] = {0}, OA[26] = {0}, RT[26] = {0};
    char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (scanf(" %c %d %d %d", &name, &a, &b, &c) == 4)
    {
        int temp;
        if (a >= b && a >= c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        else if (b >= c && b >= a)
        {
            temp = b;
            b = c;
            c = temp;
        }

        if (!(a + b > c))
        {
            NT[name - 65] = 1;
        }
        else if (a * a + b * b > c * c)
        {
            AA[name - 65] = 1;
        }
        else if (a * a + b * b < c * c)
        {
            OA[name - 65] = 1;
        }
        else if (a * a + b * b == c * c)
        {
            RT[name - 65] = 1;
        }
    }
    printf("Not Triangle: ");
    int found = 0;
    for (int i = 0; i < 26; i++)
    {
        if (NT[i] == 0)
            continue;
        if (!found)
        {
            printf("%c", table[i]);
            found = 1;
        }
        else
        {
            printf(",%c", table[i]);
        }
    }
    (found) ? puts("") : printf("None\n");
    printf("Acute Angle: ");
    found = 0;
    for (int i = 0; i < 26; i++)
    {
        if (AA[i] == 0)
            continue;
        if (!found)
        {
            printf("%c", table[i]);
            found = 1;
        }
        else
        {
            printf(",%c", table[i]);
        }
    }
    (found) ? puts("") : printf("None\n");
    printf("Obtuse Angle: ");
    found = 0;
    for (int i = 0; i < 26; i++)
    {
        if (OA[i] == 0)
            continue;
        if (!found)
        {
            printf("%c", table[i]);
            found = 1;
        }
        else
        {
            printf(",%c", table[i]);
        }
    }
    (found) ? puts("") : printf("None\n");
    printf("Right Angle: ");
    found = 0;
    for (int i = 0; i < 26; i++)
    {
        if (RT[i] == 0)
            continue;
        if (!found)
        {
            printf("%c", table[i]);
            found = 1;
        }
        else
        {
            printf(",%c", table[i]);
        }
    }
    (found) ? puts("") : printf("None\n");

    return 0;
}
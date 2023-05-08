#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alphabet[] = "zabcdefghijklmnopqrstuvwxy";

    int curr;
    while (scanf("%d", &curr) != EOF)
    {
        (curr < 0) ? (curr *= -1) : (curr *= 1);

        int q = curr / 26;
        int r = curr % 26;
        if (r == 0)
            q--;
        for (int i = 0; i <= q; i++)
        {
            printf("%c", alphabet[r]);
        }
    }
    puts("");

    return 0;
}
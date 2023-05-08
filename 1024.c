#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, spaces, print = 1;
    scanf("%d", &n);
    spaces = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        printf(" ");
    }
    printf("*\n");
    while (print <= n * 2 - 5)
    {
        for (int stack = 0; stack < 3; stack++)
        {
            for (int space = 0; space < spaces - stack; space++)
            {
                printf(" ");
            }
            for (int p = 0; p < print + stack * 2; p++)
            {
                printf("^");
            }
            printf("\n");
        }
        spaces--;
        print += 2;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < (n + 1) / 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - 2; j++)
        {
            printf("#");
        }
        printf("\n");
    }
<<<<<<< HEAD
 
=======

>>>>>>> 8c0da030ac7e523af80b9290390a0f223b8ee782
    return 0;
}

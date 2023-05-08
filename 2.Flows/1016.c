#include <stdio.h>

int main(int argc, char const *argv[])
{
    char y;
    scanf("%c", &y);

    while (y == 'y')
    {
        printf("run\n");
        scanf(" %c", &y);
    }

    return 0;
}

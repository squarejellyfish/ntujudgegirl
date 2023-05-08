#include <stdio.h>

int main(int argc, char const *argv[])
{
    int floor;
    scanf("%d", &floor);

    for (int i = 1; i <= floor; i++)
    {
        if (i == 4)
            continue;
        printf("floor %d\n", i);
    }

    return 0;
}

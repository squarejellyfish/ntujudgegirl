#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month;
    scanf("%d", &month);

    if (3 <= month && month <= 5)
    {
        printf("Spring\n");
    }
    else if (6 <= month && month <= 8)
    {
        printf("Summer\n");
    }
    else if (9 <= month && month <= 11)
    {
        printf("Autumn\n");
    }
    else if (month == 1 || month == 2 || month == 12)
    {
        printf("Winter");
    }
    else
    {
        printf("Month doesn't exist!\n");
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int heads, feet, x, y;
    scanf("%d %d", &heads, &feet);
    // 2x + 4y = feet
    // x + y = heads
    y = (feet - 2 * heads) / 2;
    x = 2 * heads - feet / 2;

    if (x + y == heads && (2 * x + 4 * y) == feet && x > 0 && y > 0)
    {
        printf("YES\n");
        printf("%d %d", x, y);
    }
    else
    {
        printf("NO");
    }

    return 0;
}

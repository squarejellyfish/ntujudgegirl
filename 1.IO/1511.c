#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y, heat_first = 20, cold_first = 20;
    scanf("%d %d %d", &n, &x, &y);

    if (n % 2 == 0)
    {
        int ans = 20 + (n / 2) * (x - y) + y;
        printf("%d", ans);
        return 0;
    }

    int ans = 20 + (n / 2) * (x - y) + x;
    printf("%d", ans);

    return 0;
}

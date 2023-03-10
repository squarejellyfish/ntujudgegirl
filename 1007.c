#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, ans = 0;
    scanf("%d", &a);

    for (int i = 0; i < 4; i++)
    {
        ans += a % 10;
        a /= 10;
    }

    printf("%d", ans);

    return 0;
}

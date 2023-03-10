#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, mod, ans;
    scanf("%d", &a);
    mod = a % 12;
    ans = a / 12;

    if (mod != 0)
    {
        printf("%d dozen and %d", ans, mod);
    }
    else
    {
        printf("%d dozen", ans);
    }

    return 0;
}

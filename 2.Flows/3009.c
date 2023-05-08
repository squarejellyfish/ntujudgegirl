#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, ans = 1;
    scanf("%d", &n);

    while (n != 0)
    {
        ans *= n;
        n--;
    }
    printf("%d", ans);

    return 0;
}

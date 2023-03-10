#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, ans;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 = 1");
        return 0;
    }
    ans = (n + 1) * n / 2;

    int curr = 1;
    for (n; n > 1; n--)
    {
        printf("%d+", curr);
        curr++;
    }
    printf("%d = %d", curr, ans);

    return 0;
}

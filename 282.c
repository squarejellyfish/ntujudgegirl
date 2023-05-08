#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    long long num;
    while (scanf("%lld", &num) != EOF)
    {
        int ans = 0;
        while (num != 0)
        {
            ans += num % 2;
            num = num >> 1;
        }
        printf("%d\n", ans);
    }

    return 0;
}

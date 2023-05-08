#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int ans = 0;
        while (num != 0)
        {
            ans += num % 2;
            num /= 2;
        }
        printf("%d\n", ans);
    }

    return 0;
}

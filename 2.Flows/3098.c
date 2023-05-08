#include <stdio.h>

int main(int argc, char const *argv[])
{
    int prev, curr, ans = 0;
    scanf("%d", &prev);

    while (1)
    {
        int ret = scanf("%d", &curr);
        if (!ret)
        {
            break;
        }
        if (curr == 9 && prev == 1)
        {
            ans++;
        }
        prev = curr;
    }
    printf("%d", ans);

    return 0;
}

#include <stdio.h>

int method2()
{
    int prev = -1, curr, ans = 0;

    while (getchar() != 'B')
    {
        if (prev == -1)
        {
            prev = 0;
            continue;
        }
        int ret = scanf("%d", &curr);
        if (ret == 0)
        {
            curr = 0;
        }
        if (curr == prev)
        {
            ans += 5;
        }
        else if (curr > prev)
        {
            ans += (curr - prev) * 10;
        }
        else
        {
            ans += (prev - curr) * 6;
        }
        prev = curr;
    }

    printf("%d\n", ans);

    return 0;
}

int method1()
{
    int prev = -1, curr, ans = 0;
    do
    {
        if (prev == -1)
        {
            prev = 0;
            continue;
        }
        scanf("%d", &curr);
        printf("%d\n", curr);
        if (curr == prev)
        {
            ans += 5;
        }
        else if (curr > prev)
        {
            ans += (curr - prev) * 10;
        }
        else
        {
            ans += (prev - curr) * 6;
        }
        prev = curr;

    } while (getchar() != 'B');

    printf("%d\n", ans);

    return 0;
}

int main(int argc, char const *argv[])
{
    int prev = -1, curr, ans = 0;

    while (getchar() != 'B')
    {
        if (prev == -1)
        {
            prev = 0;
            continue;
        }
        int ret = scanf("%d", &curr);
        if (ret == 0)
        {
            curr = 0;
        }
        if (curr == prev)
        {
            ans += 5;
        }
        else if (curr > prev)
        {
            ans += (curr - prev) * 10;
        }
        else
        {
            ans += (prev - curr) * 6;
        }
        prev = curr;
    }

    printf("%d\n", ans);

    return 0;
}

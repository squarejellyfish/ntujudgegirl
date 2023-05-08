#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int ans = 0, last_ans = 0;
        bool broken = false;
        while (num != 0)
        {
            if (num % 2 == 1 && !broken)
            {
                ans++;
            }
            else if (num % 2 == 0)
            {
                broken = true;
                if (ans > last_ans)
                {
                    last_ans = ans;
                }
            }
            else if (num % 2 == 1 && broken)
            {
                ans = 1;
                broken = false;
            }
            num /= 2;
        }
        (last_ans > ans) ? printf("%d\n", last_ans) : printf("%d\n", ans);
    }

    return 0;
}

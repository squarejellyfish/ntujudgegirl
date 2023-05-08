#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, cap, ans;
    scanf("%d", &x);
    ans = x;
    cap = x;

    while (cap >= 3)
    {
        int cup = cap / 4;
        ans += cup;
        cap = cap % 4 + cup;
        if (cap == 3)
        {
            ans += 1;
            cap = 0;
        }
    }
    printf("%d\n", ans);

    return 0;
}

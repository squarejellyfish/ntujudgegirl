#include <stdio.h>
#include <stdlib.h>

int D, A, B, C, ans = 0;

int search_next(int a, int b, int c, long long curr)
{
    if (curr > D || a < 0 || b < 0 || c < 0)
        return 0;
    if (curr == D)
    {
        ans = 1;
        return 1;
    }

    if (search_next(a - 1, b, c, curr + A)) {
        return 1;
    }
    if (search_next(a, b - 1, c, curr + B)) {
        return 1;
    }
    if (search_next(a, b, c - 1, curr + C)) {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c;
    while (scanf("%d %d %d %d %d %d %d", &D, &a, &b, &c, &A, &B, &C) != EOF)
    {
        search_next(a, b, c, 0);
        if (ans)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
        ans = 0;
    }

    return 0;
}

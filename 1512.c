#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int curr;
        scanf("%d", &curr);

        while (curr >= K)
        {
            ans += K;
            curr -= K;
        }
    }
    printf("%d\n", ans);

    return 0;
}
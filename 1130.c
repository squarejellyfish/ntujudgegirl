#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *players = (int *)malloc(sizeof(int) * N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &players[i]);
        sum += players[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (players[i] * N > sum)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}
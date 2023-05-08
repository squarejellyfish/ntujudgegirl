#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d", &N);
    int *investers = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &investers[i]);
    }

    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        int pos;
        scanf("%d", &pos);

        if (pos > N)
            continue;

        investers[pos - 1] = 0;
    }
    int sum = 0, max = 0;
    for (int i = 0; i < N; i++)
    {
        sum += investers[i];
        if (investers[i] > investers[max])
        {
            max = i;
        }
    }
    printf("%d\n%d %d\n", sum, max + 1, investers[max]);

    return 0;
}
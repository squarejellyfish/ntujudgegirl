#include <stdio.h>
#include <stdlib.h>
#include "bag.c"

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int things = 0, sum = 0;
    for (int i = 0; i < N; i++)
    {
        int curr;
        scanf("%d", &curr);

        if (curr <= K)
        {
            things++;
            sum += curr;
        }
    }
    printf("%d %d\n", things, sum);

    return 0;
}
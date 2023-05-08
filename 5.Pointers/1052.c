#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int *scores = (int *)malloc(sizeof(int) * n);
    int fail[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
        fail[i] = -1;
    }

    int hindex = 0, highest = -1;
    double avg;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            hindex = i + 1;
        }
        if (scores[i] < 60)
        {
            fail[i] = scores[i];
        }
        avg += (double)scores[i] / n;
    }
    printf("avg = %.2f\n", avg);
    printf("fail:\n");
    for (int i = 0; i < n; i++)
    {
        if (fail[i] != -1)
        {
            printf("%d: %d\n", i + 1, fail[i]);
        }
    }
    printf("highest:\n%d: %d", hindex, highest);

    return 0;
}

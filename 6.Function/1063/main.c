#include <stdio.h>
#include <stdlib.h>
#include "score.h"

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    inputAry(n, arr);

    double avg = Avg(n, arr);
    printf("avg = %.2f\n", avg);
    int max = MaxScore(n, arr);
    printf("highest:\n%d: %d\n", max + 1, arr[max]);

    return 0;
}

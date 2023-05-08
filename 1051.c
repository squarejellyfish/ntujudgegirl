#include <stdio.h>
#include <stdlib.h>

long double calc_class(int *class, int size)
{
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf(" %d: %d\n", i + 1, class[i]);
        sum += class[i];
    }
    long double avg = (long double)sum / size;
    printf(" avg: %.2Lf\n", avg);
    return avg;
}

int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d%d", &m, &n);

    int *classes[m];
    for (int i = 0; i < m; i++)
    {
        classes[i] = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &classes[i][j]);
        }
    }
    long double avg = 0;
    for (int i = 0; i < m; i++)
    {
        printf("class %d\n", i + 1);
        avg += calc_class(classes[i], n) / m;
    }
    printf("avg: %.2Lf\n", avg);

    return 0;
}
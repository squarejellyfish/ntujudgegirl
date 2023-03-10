#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    float arr[n], sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        scanf(" %f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    int max = arr[0], max_index = 1;

    printf("avg = %.2f\nfail:\n", avg);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 60)
        {
            printf("%d: %.0f\n", i + 1, arr[i]);
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i + 1;
        }
    }
    printf("highest:\n%d: %d", max_index, max);

    return 0;
}
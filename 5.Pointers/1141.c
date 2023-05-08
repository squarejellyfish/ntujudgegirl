#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum / n)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}

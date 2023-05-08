#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *contour = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &contour[i]);
    }

    int hills = 0, ravine = 0;
    for (int i = 0; i < N; i++)
    {
        if (!i || i == N - 1)
            continue;

        if (contour[i - 1] < contour[i] && contour[i + 1] < contour[i])
            hills++;
        if (contour[i - 1] > contour[i] && contour[i + 1] > contour[i])
            ravine++;
    }
    printf("%d\n%d\n", hills, ravine);

    return 0;
}
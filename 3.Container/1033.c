#include <stdio.h>

int main(int argc, char const *argv[])
{
    int scores[2][3];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
    }

    int total = 0;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        float avg;
        printf("class %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf(" %d: %d\n", j + 1, scores[i][j]);
            sum += scores[i][j];
        }
        total += sum;
        printf(" sum: %d\n", sum);
        printf(" avg: %.2f\n", (float)sum / 3);
    }
    printf("total: %d, avg: %.2f", total, (float)total / 6);

    return 0;
}

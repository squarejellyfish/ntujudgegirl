#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, avg;
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3;
    float arr[3] = {a, b, c};

    printf("avg = %.2f\nfail:\n", avg);
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < 60)
        {
            printf("%d: %.0f\n", i + 1, arr[i]);
        }
    }

    return 0;
}
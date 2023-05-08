#include <stdio.h>

int main(int argc, char const *argv[])
{
    int data[5][3] = {
        {76, 73, 85},
        {88, 84, 76},
        {92, 82, 92},
        {82, 91, 85},
        {72, 74, 73}};
    int total = 0, highest = 0;
    float highest_avg = 0;

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        printf("student %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf(" %d: %d\n", j + 1, data[i][j]);
            sum += data[i][j];
        }
        float avg = (float)sum / 3;
        printf(" sum: %d\n", sum);
        printf(" avg: %.2f\n", avg);
        if (avg > highest_avg)
        {
            highest_avg = avg;
            highest = i + 1;
        }
        total += sum;
    }
    printf("total: %d, avg: %.2f\n", total, (float)total / 15);
    printf("highest avg: student %d: %.2f\n", highest, highest_avg);

    return 0;
}

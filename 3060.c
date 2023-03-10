#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, max, max_index = 1, min, min_index = 1, index = 1;
    float avg;
    int curr;
    scanf("%d", &curr);
    max = curr;
    min = curr;
    sum += curr;

    while (1)
    {
        scanf("%d", &curr);
        if (curr == -1)
            break;
        index++;

        sum += curr;
        if (curr > max)
        {
            max = curr;
            max_index = index;
        }
        if (curr < min)
        {
            min = curr;
            min_index = index;
        }
    }
    avg = (float)sum / (float)index;
    printf("%d\n%.1f\n%d\n%d\n%d\n%d", sum, avg, max, max_index, min, min_index);

    return 0;
}

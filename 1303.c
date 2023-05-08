#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, count = 0;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        sum += num;
        count++;
    }

    printf("%d\n%.1f", sum, (float)sum / count);

    return 0;
}

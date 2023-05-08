#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0, sum_a = 0, sum_b = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
        if (num > 50 && num % 2 == 1)
        {
            sum_a += num;
        }
        else if (num >= 100 && num % 2 == 0)
        {
            sum_b += num;
        }
    }
    printf("%d\n%d\n%d", sum_a, sum_b, sum);

    return 0;
}

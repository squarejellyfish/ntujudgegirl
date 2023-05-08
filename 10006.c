#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, n;
    while (scanf("%d", &n) == 1)
    {
        sum += n;
    }
    printf("%d\n", sum);

    return 0;
}
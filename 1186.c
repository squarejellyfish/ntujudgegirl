#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int target, n, flag = 0;
    bool found = false;
    scanf("%d\n%d", &target, &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (num == target)
        {
            printf("Found@%d\n", i + 1);
            found = true;
        }
    }

    if (!found)
    {
        printf("%d is not found.", target);
    }
    return 0;
}

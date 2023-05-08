#include <stdio.h>

int main(int argc, char const *argv[])
{
    int max = -1, ptr = 0;
    for (int i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
            ptr = i + 1;
        }
    }
    printf("%d: %d", ptr, max);

    return 0;
}

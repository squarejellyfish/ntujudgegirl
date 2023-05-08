#include <stdio.h>

int main(int argc, char const *argv[])
{

    while (1)
    {
        int n;
        int ret = scanf("%d", &n);
        if (ret)
        {
            printf("n=%d\n", n);
            break;
        }
        else
        {
            printf("is not a number\n");
            char dummy;
            scanf("%c", &dummy);
        }
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l, s, count = 0;
    scanf("%d %d", &l, &s);

    while (s != l)
    {
        if (s < l)
        {
            s += 5;
            count++;
        }
        else if (s > l)
        {
            s -= 2;
            count++;
        }
        else
            break;
    }
    printf("%d", count);

    return 0;
}

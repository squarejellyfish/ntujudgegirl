#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, count = 1, curr = 1;
    scanf("%d", &n);

    while (curr != 0)
    {
        if (count < n)
        {
            printf("%d", curr);
            curr++;
            count++;
        }
        else
        {
            printf("%d", curr);
            curr--;
        }
    }

    return 0;
}

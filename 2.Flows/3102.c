#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int m;
    scanf("%d", &m);

    for (int i = 2; i < m; i++)
    {
        if (is_prime(i))
        {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}

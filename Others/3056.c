#include <stdio.h>
#include <stdbool.h>

bool is_multiplier(int x)
{
    if (x % 7 == 0)
        return true;
    return false;
}

bool contains_seven(int x)
{
    while (x != 0)
    {
        if (x % 10 == 7)
            return true;
        x /= 10;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);

    bool found = false;
    for (int i = n; i <= m; i++)
    {
        if (is_multiplier(i))
        {
            if (!found)
            {
                printf("%d", i);
                found = true;
            }
            else
            {
                printf(" & %d", i);
            }
        }
    }
    printf("\n");
    found = false;
    for (int i = n; i <= m; i++)
    {
        if (contains_seven(i))
        {
            if (!found)
            {
                printf("%d", i);
                found = true;
            }
            else
            {
                printf(" & %d", i);
            }
        }
    }

    return 0;
}

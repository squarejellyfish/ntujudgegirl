#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_armstrong(int num)
{
    int ret = 0, n = 0, m = num, num_copy = num;
    while (m != 0)
    {
        n++;
        m /= 10;
    }
    while (num != 0)
    {
        ret += pow((num % 10), n);
        num /= 10;
    }
    return (ret == num_copy) ? true : false;
}

int main(int argc, char const *argv[])
{
    int n, m;
    bool found = false;
    scanf("%d %d", &n, &m);

    for (int i = n; i < m; i++)
    {
        if (is_armstrong(i))
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
    if (!found)
    {
        printf("none");
    }

    return 0;
}

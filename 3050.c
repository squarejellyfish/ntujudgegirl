#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, curr = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", curr);
            curr++;
        }
        printf("\n");
    }

    return 0;
}

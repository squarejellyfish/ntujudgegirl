#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int curr;
        scanf("%d", &curr);
        printf("%d", curr);
        for (int j = 0; j < curr; j++)
        {
            printf("\n");
        }
        printf("\n");
    }
    printf("--------------------\n");

    return 0;
}

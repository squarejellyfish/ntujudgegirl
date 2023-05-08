#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[20];
    int num, i = 0;
    scanf("%d", &num);
    while (num != -1)
    {
        arr[i] = num;
        i++;
        scanf("%d", &num);
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d\n", arr[j]);
        for (int k = 0; k < arr[j]; k++)
        {
            printf("\n");
        }
    }
    printf("--------------------\n");

    return 0;
}

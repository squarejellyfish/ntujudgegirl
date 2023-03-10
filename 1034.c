#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    scanf("%d\n%d\n%d\n%d\n%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
        for (int j = 0; j < arr[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

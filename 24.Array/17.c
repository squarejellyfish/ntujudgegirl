#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int *arr = (int *)malloc(sizeof(int) * (row * col));

    for (int i = 0; i < row * col; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i * col + j];
        }
        printf("%d\n", sum / row);
    }

    return 0;
}

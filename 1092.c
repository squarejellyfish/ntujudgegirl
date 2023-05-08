#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i, still = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            if (arr[j] < arr[j - 1])
            {
                still = 1;
            }
        }
        if (!still)
        {
            break;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

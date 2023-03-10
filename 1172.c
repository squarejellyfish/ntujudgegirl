#include <stdio.h>

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        int temp, index;
        for (int j = i; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[5];
    scanf("%d\n%d\n%d\n%d\n%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    selectionSort(arr, 5);

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

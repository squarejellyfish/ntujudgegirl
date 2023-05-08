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
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr[5] = {a, b, c, d, e};

    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

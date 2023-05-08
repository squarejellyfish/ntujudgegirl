#include <stdio.h>
#include <limits.h>

void sort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int max = i;
        int temp, index;
        for (int j = i; j < size; j++)
        {
            if (array[j] > array[max])
            {
                max = j;
            }
        }
        temp = array[i];
        array[i] = array[max];
        array[max] = temp;
    }
}

int main()
{
    int array[] = {1, 5, 3, -6, -34, 68, 29, 300};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
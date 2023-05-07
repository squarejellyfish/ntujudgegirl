#include <stdlib.h>
#include <string.h>

void fill_array(int **ptr, int n)
{
    memset(ptr[0], 0, 100); 

    for (int i = 0; i < n; i++)
    {
        *ptr[i] = i;
    }

    int *left = ptr[0], *right = left + 1;
    while (left != ptr[n - 1]) {
        while (*right == 0) right++;
        int filler = *left + *right;
        left++;
        right++;

        while (*left == 0) {
            *left = filler;
            left++;
        } 
    }
}

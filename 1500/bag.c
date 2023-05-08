#include "bag.h"
#include <stdio.h>
#include <stdlib.h>

void ans(int n, int k, int *a)
{
    int things = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = a[i];
        if (curr <= k)
        {
            things++;
            sum += curr;
        }
    }
    printf("%d %d\n", things, sum);
}
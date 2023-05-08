#include <stdio.h>
#include <stdlib.h>
#include "evaluate_f.h"

int evaluate_f(int *iptr[], int n, int *index)
{
    int ret = iptr[0][0] * 4 - iptr[0][1] * 6;
    for (int i = 0; i < n; i++)
    {
        int curr = iptr[i][0] * 4 - iptr[i][1] * 6;
        if (curr > ret)
        {
            ret = curr;
            *index = i;
        }
    }
    return ret;
}

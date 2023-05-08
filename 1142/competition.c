#include "competition.h"

void competition(int *a, int n)
{
    int t = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (t <= i)
        {
            break;
        }
        int temp = a[i];
        a[i] = a[t];
        a[t] = temp;
        t--;
    }
}
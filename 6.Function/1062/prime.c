#include <stdio.h>
#include <stdlib.h>

#include "prime.h"

int IsPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
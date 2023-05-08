#include <stdio.h>
#include <stdlib.h>

int count_bits(long n)
{
    int ret = 0;
    while (n)
    {
        ret += n & 1;
        n = n >> 1;
    }
    return ret;
}

int main()
{
    long *nums = (long *)malloc(sizeof(long) * 1000);
    long num, count = 0;
    while (scanf("%ld", &num) == 1)
    {
        nums[count] = num;
        count++;
    }
    for (int i = 0; i < count - 1; i++)
    {
        int min = i;
        for (int j = i; j < count; j++)
        {
            int nj = count_bits(nums[j]), nmin = count_bits(nums[min]);
            if (nj < nmin)
            {
                min = j;
            }
            else if (nj == nmin && nums[j] < nums[min])
            {
                min = j;
            }
        }
        long temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%ld\n", nums[i]);
    }

    return 0;
}
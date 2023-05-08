#include <stdio.h>
#include <stdlib.h>

int BitCount(long long u)
{
    long long uCount;

    uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
static long BitCount64(long i)
{
    i = i - ((i >> 1) & 0x5555555555555555);
    i = (i & 0x3333333333333333) + ((i >> 2) & 0x3333333333333333);
    return (((i + (i >> 4)) & 0xF0F0F0F0F0F0F0F) * 0x101010101010101) >> 56;
}
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
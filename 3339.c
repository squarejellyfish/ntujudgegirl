#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n;
    scanf("%ld", &n);

    long odd = (n & 0xaaaaaaaa) >> 1;
    long even = (n & 0x55555555) << 1;

    n = odd | even;
    long odd2 = (n & 0xcccccccc) >> 2;
    long even2 = (n & 0x33333333) << 2;

    n = odd2 | even2;
    long odd4 = (n & 0xf0f0f0f0) >> 4;
    long even4 = (n & 0x0f0f0f0f) << 4;

    n = odd4 | even4;
    long odd8 = (n & 0xff00ff00) >> 8;
    long even8 = (n & 0x00ff00ff) << 8;

    n = odd8 | even8;
    long odd16 = (n & 0xffff0000) >> 16;
    long even16 = (n & 0x0000ffff) << 16;

    n = odd16 | even16;
    printf("%ld\n", n);

    return 0;
}
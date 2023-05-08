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

int main() {
	printf("hello world");

    return 0;
}

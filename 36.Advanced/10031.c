#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m)
{
    if (!((a | b) & (0xFFFFFFFFULL << 32)))
        return a * b % m;

    uint64_t d = 0, mp2 = m >> 1;
    int i;
    if (a >= m)
        a %= m;
    if (b >= m)
        b %= m;
    for (i = 0; i < 64; ++i)
    {
        d = (d > mp2) ? (d << 1) - m : d << 1;
        if (a & 0x8000000000000000ULL)
            d += b;
        if (d >= m)
            d -= m;
        a <<= 1;
    }
    return d;
}

int main()
{
    int a, b, n;
    while (scanf("%d %d %d", &a, &b, &n) == 3)
    {
        // int ab = a * b;
        // (ab > n || ab == 0) ? (n = (ab / n) * n) : (n);
        // int x = ab - n;
        // printf("%d\n", x);
        uint64_t x = mul_mod(a, b, n);
        printf("%" PRIu64 "\n", x);
    }

    return 0;
}
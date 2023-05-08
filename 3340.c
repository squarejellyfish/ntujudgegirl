#include <stdio.h>
#include <stdlib.h>

int reverse_bit(int n)
{
    n = (n & 10) >> 1 | (n & 5) << 1;
    n = (n & 12) >> 2 | (n & 3) << 2;

    return n;
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    n = reverse_bit(n);
    m = reverse_bit(m);
    k = reverse_bit(k);

    int ans = 0;
    ans = (ans | n) << 4;
    ans = (ans | m) << 4;
    ans = (ans | k);

    printf("%d\n", ans);

    return 0;
}
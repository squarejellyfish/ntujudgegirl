#include <stdio.h>

float get_percent(int n)
{
    if (n < 540000)
        return 0.05;
    if (n < 1210000)
        return 0.12;
    if (n < 2420000)
        return 0.20;
    if (n < 4530000)
        return 0.30;
    if (n < 10310000)
        return 0.40;
    return 0.45;
}

float get_offset(int n)
{
    if (n < 540000)
        return 0;
    if (n < 1210000)
        return 37800;
    if (n < 2420000)
        return 134600;
    if (n < 4530000)
        return 376600;
    if (n < 10310000)
        return 829600;
    return 1345100;
}

int main(int argc, char const *argv[])
{
    float n, j, l, k, m;
    scanf("%f", &n);

    j = get_percent(n);
    l = get_offset(n);
    k = n * j;
    m = k - l;

    printf("%d%% %.0f %.0f %.0f ", (int)(j * 100), k, l, m);

    return 0;
}

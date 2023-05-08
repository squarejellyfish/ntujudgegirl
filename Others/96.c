#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

int main()
{
    double a, b, c, ans;
    scanf("%lf %lf %lf", &a, &b, &c);

    ans = c * c * PI * 0.75;

    if (c > b)
    {
        ans += (c - b) * (c - b) * PI * 0.25;
    }
    if (c > a)
    {
        ans += (c - a) * (c - a) * PI * 0.25;
    }
    printf("%.6lf\n", ans);

    return 0;
}
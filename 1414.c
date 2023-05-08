#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979

int main()
{
    double n;
    scanf("%lf", &n);

    double ans = (4.0 / 3.0) * PI * n * n * n;
    printf("%.3lf\n", ans);

    return 0;
}
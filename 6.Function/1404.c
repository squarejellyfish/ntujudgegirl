#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979

int main()
{
    double n;
    scanf("%lf", &n);

    printf("%.2lf\n", pow(n, 1.5));
    printf("%.2lf\n", (n / 2) * (n / 2) * PI);

    return 0;
}
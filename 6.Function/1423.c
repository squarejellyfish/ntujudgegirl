#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979

int main()
{
    double n;
    scanf("%lf", &n);

    printf("%.3lf\n", 4.0 * PI * n * n);

    return 0;
}
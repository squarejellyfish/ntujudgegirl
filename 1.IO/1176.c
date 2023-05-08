#include <stdio.h>

#define PI 3.141592653589793

int main(int argc, char const *argv[])
{
    float a, b, ans;
    scanf("%f\n%f", &a, &b);
    ans = b * b * PI - a * a * PI;

    printf("%.2f", ans);

    return 0;
}

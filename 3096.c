#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2, x3, y3, a, b, c, s;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    s = (a + b + c) / 2;

    float ans = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.2f", ans);

    return 0;
}

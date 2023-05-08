#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
    {
        double pos_ans = ((-1) * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        double neg_ans = ((-1) * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        printf("%.20lf %.20lf\n", neg_ans, pos_ans);
    }

    return 0;
}
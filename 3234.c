#include <stdio.h>
#include <math.h>

double c, a, b;

double stdev(double x, double y, double z, double avg)
{
    return sqrt((pow(x - avg, 2) + pow(y - avg, 2) + pow(z - avg, 2)) / 3);
}

void get_ans(int digit)
{
    double sum, x, y, z;
    if (digit == -1)
    {
        sum = a + b + c;
        x = a;
        y = b;
        z = c;
    }
    else
    {
        if (digit == 0)
        {
            digit = 1;
        }
        x = (int)(a / digit) % 10;
        y = (int)(b / digit) % 10;
        z = ((int)c / digit) % 10;
        sum = x + y + z;
    }
    double avg = sum / 3;
    double dev = stdev(x, y, z, avg);
    if (digit == -1)
        printf("%.2f %.2f %.2f\n", sum, avg, dev);
    else
        printf("%.0f %.2f %.2f\n", sum, avg, dev);
}

int main(int argc, char const *argv[])
{

    scanf("%lf %lf %lf", &a, &b, &c);

    get_ans(1000);
    get_ans(100);
    get_ans(10);
    get_ans(0);
    get_ans(-1);

    return 0;
}

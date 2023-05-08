#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float f, ans_float = 1, ans_int = 1;

    while (1)
    {
        int ret = scanf("%f", &f);
        if (ret == 0)
        {
            break;
        }
        if (round(f) == f)
        {
            ans_int *= f;
        }
        else
        {
            ans_float *= f;
        }
    }
    printf("%.2f\n", ans_float);
    printf("%.0f\n", ans_int);
    if (ans_float > ans_int)
    {
        printf("Float > Int\n");
    }
    else if (ans_int > ans_float)
    {
        printf("Float < Int\n");
    }
    else
    {
        printf("Float = Int");
    }

    return 0;
}

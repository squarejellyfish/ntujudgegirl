#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f", a, b, a + b);

    return 0;
}
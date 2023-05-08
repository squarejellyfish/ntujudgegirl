#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, ans;
    scanf("%f\n%f\n%f", &a, &b, &c);
    ans = (a + b) * c / 2;

    printf("%.1f", ans);

    return 0;
}

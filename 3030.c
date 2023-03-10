#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float original, adjusted;
    scanf("%f", &original);
    adjusted = sqrt(original) * 10;

    printf("Original: %.2f\n", original);
    printf("Adjusted: %.2f(+%.0f)", adjusted, adjusted - original);

    return 0;
}

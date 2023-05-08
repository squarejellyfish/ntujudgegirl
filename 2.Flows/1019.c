#include <stdio.h>

int main(int argc, char const *argv[])
{
    float height, weight, bmi;
    scanf("%f\n%f", &height, &weight);
    height /= 100;
    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        printf("%.2f\n", bmi);
        printf("Underweight");
        return 0;
    }
    if (bmi < 24)
    {
        printf("%.2f\n", bmi);
        printf("Normal");
        return 0;
    }
    if (bmi < 27)
    {
        printf("%.2f\n", bmi);
        printf("Overweight");
        return 0;
    }
    if (bmi < 30)
    {
        printf("%.2f\n", bmi);
        printf("Obese Class I");
        return 0;
    }
    if (bmi < 35)
    {
        printf("%.2f\n", bmi);
        printf("Obese Class II");
        return 0;
    }
    else
    {
        printf("%.2f\n", bmi);
        printf("Obese Class III");
    }

    return 0;
}

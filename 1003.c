#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, sum, product, smallest, largest;
    float avg;
    scanf("%d\n%d\n%d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3;
    product = a * b * c;
    smallest = (a < b) ? a : b;
    smallest = (smallest < c) ? smallest : c;
    largest = (a > b) ? a : b;
    largest = (largest > c) ? largest : c;

    printf("sum is %d\n", sum);
    printf("average is %.2f\n", avg);
    printf("product is %d\n", product);
    printf("smallest is %d\n", smallest);
    printf("largest is %d\n", largest);

    return 0;
}

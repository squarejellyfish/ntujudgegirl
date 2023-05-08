#include <stdio.h>

int main(int argc, char const *argv[])
{
    double a, b, ans;
    char operator;
    scanf("%lf\n%lf", &a, &b);
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    default:
        break;
    }
    printf("%.2f %c %.2f = %.2f", a, operator, b, ans);

    return 0;
}

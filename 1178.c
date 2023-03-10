#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);

    (a > b && a > c) ? printf("True\n") : printf("False\n");
    (a < b && a < c) ? printf("True\n") : printf("False\n");
    (a > b && a > c) ? printf("False\n") : printf("True\n");
    (a < b && a < c) ? printf("False\n") : printf("True\n");

    return 0;
}

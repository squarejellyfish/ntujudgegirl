#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("%d\n%d\n", a, b);

    return 0;
}

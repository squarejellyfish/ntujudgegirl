#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char x;
    scanf("%c", &x);

    if (x > 47 && x < 58)
    {
        printf("%c is a number.", x);
    }
    else if (x > 64 && x < 91)
    {
        printf("%c is a capital letter.", x);
    }
    else if (x > 96 && x < 123)
    {
        printf("%c is a lowercase letter.\n", x);
        x = toupper(x);
        printf("swap to capital letter %c.\n", x);
    }
    else
    {
        printf("%c is a punctuation.", x);
    }

    return 0;
}

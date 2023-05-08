#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    do
    {
        scanf(" %c", &c);
        printf("%c\n", c);
    } while (c != 'q');

    return 0;
}

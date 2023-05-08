#include <stdio.h>

int main(int argc, char const *argv[])
{
    char n[3];
    scanf("%s", n);

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", n[i]);
    }

    return 0;
}

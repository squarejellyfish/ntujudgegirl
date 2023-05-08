#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    char str[128], str2[256];
    scanf("%c", &c);
    scanf(" %s", str);
    scanf(" %[^\n]", str2);

    printf("%c\n%s\n%s\n", c, str, str2);

    return 0;
}

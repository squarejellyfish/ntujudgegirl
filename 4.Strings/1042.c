#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[128];
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("%s\n", str);

    return 0;
}

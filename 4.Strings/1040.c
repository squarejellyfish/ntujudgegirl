#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[128];

    while (1)
    {
        gets(str);
        if (strcmp(str, "-1") == 0)
        {
            break;
        }
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = toupper(str[i]);
        }
        printf("%s\n", str);
    }

    return 0;
}

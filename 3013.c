#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[128], target[128];
    gets(str);
    gets(target);
    int len1 = strlen(str), len2 = strlen(target);

    char *pch = strstr(str, target);
    if (pch)
    {
        for (int i = 0; i < len1; i++)
        {
            if (str[i] == target[0])
            {
                // printf("matched first\n");
                int contains = 1;
                for (int j = 0; j < len2; j++)
                {
                    if (str[i + j] != target[j])
                    {
                        contains = 0;
                        break;
                    }
                }
                if (contains)
                    printf("%d\t%c%c+%s+%c%c\n", i, str[i - 2], str[i - 1], target, str[i + len2], str[i + len2 + 1]);
            }
        }
    }

    return 0;
}

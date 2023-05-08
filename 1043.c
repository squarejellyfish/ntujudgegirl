#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[128], s2[128];
    gets(s1);
    gets(s2);

    if (strcmp(s1, s2) > 0)
    {
        printf("1>2\n");
    }
    else if (strcmp(s1, s2) < 0)
    {
        printf("1<2\n");
    }
    else
    {
        printf("1==2\n");
    }
    char *new = strcat(s1, s2);
    printf("%s\n", new);
    printf("%d\n", strlen(new));

    return 0;
}

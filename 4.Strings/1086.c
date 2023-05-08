#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int n;
    char c1, c2;
    char s1[256], s2[128];
    float f;
    scanf("%d", &n);
    scanf(" %c", &c1);
    scanf(" %f", &f);
    scanf(" %[^\n]", &s1);
    scanf(" %c", &c2);
    scanf(" %s", &s2);

    printf("%.2f\n", (float)n + f);
    printf("%c %d\n", c1 + n, c1 + n);
    printf("%c %d\n", c2 + (int)f, c2 + (int)f);
    for (int i = 0; s1[i]; i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for (int i = 0; s2[i]; i++)
    {
        s2[i] = toupper(s2[i]);
    }
    printf("%s\n", s1);
    printf("%s", s2);

    return 0;
}

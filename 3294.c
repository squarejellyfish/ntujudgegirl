#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    char **addrs = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        addrs[i] = (char *)malloc(sizeof(char) * 20);
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", addrs[i]);
    }
    int num;
    while (scanf("%d", &num) != EOF)
    {
        printf("%s\n", addrs[num]);
    }
    return 0;
}

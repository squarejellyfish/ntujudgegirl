#include <stdio.h>
#include <stdbool.h>

char get_ans(char *str)
{

    int i;
    char found_lower = false, found_upper = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        found_lower = found_lower || (str[i] >= 'a' && str[i] <= 'z');
        found_upper = found_upper || (str[i] >= 'A' && str[i] <= 'Z');

        if (found_lower && found_upper)
            return 2;
    }

    if (found_lower && !found_upper)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    int n, ans[] = {0, 0, 0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[10];
        scanf(" %s", str);
        ans[get_ans(str)]++;
    }
    printf("%d %d %d\n", ans[0], ans[1], ans[2]);

    return 0;
}

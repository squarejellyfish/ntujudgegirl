#include <stdio.h>
#include <string.h> // strlen(s)

int main()
{
    char s[1024];
    while (scanf("%s", s) == 1)
    {
        int n = (int)strlen(s); // strlen("CSIE") = 4, actually use "CSIE\0" in memory.
        int last = 0, last_is_char = 1;
        for (int i = 0; i < n; i++)
        {
            int c = s[i];
            /*
                input "CSIE",
                s[0] = 'C', s[1] = 'S', ...
            */
            if (c >= 48 && c <= 57)
            {
                last *= 10;
                last += c - 48;
                last_is_char = 0;
                if (i == n - 1)
                    printf("%d\n", last);
            }
            else
            {
                if (!last_is_char)
                {
                    printf("%d\n", last);
                    last_is_char = 1;
                }
                last = 0;
            }
        }
    }
    return 0;
}
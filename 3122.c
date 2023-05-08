#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[8] = "OI_EAS_T";
    char input[1024];

    scanf("%[^\n]", input);
    for (int i = 0; i < strlen(input); i++)
    {
        int curr = input[i] - 48;
        if (curr >= 0 && curr < 8)
        {
            printf("%c", c[curr]);
        }
        else
        {
            printf("%c", input[i]);
        }
    }

    return 0;
}
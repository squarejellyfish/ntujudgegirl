#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ans[4] = {0};
    char S[110];

    scanf("%s", S);
    for (int i = 0; i < strlen(S); i++)
    {
        int curr = S[i];
        if (curr >= 48 && curr <= 57)
        {
            ans[0]++;
        }
        if ((curr >= 65 && curr <= 90) || (curr >= 97 && curr <= 122))
        {
            ans[1]++;
            if (curr == 65 || curr == 97 || curr == 69 || curr == 101 || curr == 73 || curr == 105 || curr == 79 || curr == 111 || curr == 85 || curr == 117)
            {
                ans[2]++;
            }
            else
            {
                ans[3]++;
            }
        }
    }
    printf("%d %d %d %d\n", ans[0], ans[1], ans[2], ans[3]);

    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char pass[11], guess[11];
    int matched[11] = {0}, ans[2] = {0, 0};
    scanf("%s %s", pass, guess);

    for (int i = 0; pass[i] != '\0'; i++)
    {
        if (pass[i] == guess[i])
        {
            ans[0]++;
            matched[i]++;
            continue;
        }
        for (int j = 0; guess[j] != '\0'; j++)
        {
            // printf("%c %c\n", pass[i], guess[i]);
            if (j == i)
                continue;
            if (guess[j] == pass[i] && !matched[j] && guess[j] != pass[j])
            {
                // printf("%d %d is a match of B\n", i, j);
                ans[1]++;
                matched[j]++;
                break;
            }
        }
    }
    printf("%dA%dB\n", ans[0], ans[1]);

    return 0;
}

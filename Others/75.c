#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // int *table = (int *)malloc(sizeof(int) * 58);
    // char *S = (char *)malloc(sizeof(char) * 110);
    int table[58] = {0};
    char S[150];

    scanf(" %s", S);
    for (int i = 0; i < strlen(S); i++)
    {
        int pos = S[i] - 65;
        if (pos < 0 || pos > 57)
            continue;
        table[pos]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d\n", table[i] + table[i + 32]);
    }

    return 0;
}
// ~h@w\pzrxB`lJ)<I,<E]a~[nft.]uf}{kxmd:NPw@8Ntc,UbDH{r&q}nywff[!4,%,8,lqK;e.g;nYjq[oIh0N^Qv/B#3nV=T-,S
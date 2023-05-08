#include <stdio.h>
#define MAXN 100005

int A[MAXN];
int main()
{
    int n, i;
    while (scanf("%d", &n) == 1)
    {
        int zcount = 0, count = 0;
        for (i = 0; i < n; i++)
        {
            int curr;
            scanf("%d", &curr);
            if (curr == 0)
            {
                zcount++;
            }
            else
            {
                A[count] = curr;
                count++;
            }
        }
        /* add your code */
        for (int i = 0; i < count; i++)
        {
            if (!i)
            {
                printf("%d", A[i]);
                continue;
            }
            printf(" %d", A[i]);
        }
        for (int i = 0; i < zcount; i++)
        {
            printf(" 0");
        }
    }
    return 0;
}
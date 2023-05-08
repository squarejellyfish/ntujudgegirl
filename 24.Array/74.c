#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int m;
    scanf("%d", &m);
    int ans[m];
    for (int i = 0; i < m; i++)
    {
        ans[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        ans[nums[i] % m]++;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}

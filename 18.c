#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int ans[r*c], count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int curr = arr[i][j];
            int top, right, bottom, left;
            (i - 1 < 0) ? (top = curr - 1) : (top = arr[i - 1][j]);
            (j + 1 == c) ? (right = curr - 1) : (right = arr[i][j + 1]);
            (i + 1 == r) ? (bottom = curr - 1) : (bottom = arr[i + 1][j]);
            (j - 1 < 0) ? (left = curr - 1) : (left = arr[i][j - 1]);

            if (curr > top && curr > right && curr > bottom && curr > left) {
                ans[count] = curr;
                count++;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}

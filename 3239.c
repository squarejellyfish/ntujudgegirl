#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int ans[n];

    ans[0] = 0;
    for (int i = 0; i < n; i++) {
        int curr;
        scanf("%d", &curr);

        ans[i + 1] = ans[i] + curr;
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        scanf("%d %d", &l, &r);

        int sum = ans[r] - ans[l - 1];
        printf("%d\n", sum);
    }
    
    
    return 0;
}

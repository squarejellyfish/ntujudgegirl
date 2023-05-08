#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int sum[m], max[m], min[m];

    for (int i = 0; i < m; i++) {
        sum[i] = 0;
        max[i] = -1;
        min[i] = 10001;
    }

    int curr;
    for (int i = 0; i < n; i++) {
        scanf("%d", &curr);
        int index = curr % m;
        sum[index] += curr;
        if (curr > max[index]) {
            max[index] = curr;
        }
        if (curr < min[index]) {
            min[index] = curr;
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d %d %d\n", sum[i], max[i], min[i]);
    }

    return 0;
}

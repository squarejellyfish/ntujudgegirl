#include <stdio.h>
#include <stdlib.h>

int ans = -1;

void search_next(int* weights, int* values, int n, int value, int W) {
    if (n == 0) {
        if (value > ans) {
            ans = value;
        }
        return;
    } 
    if (W == 0) {
        if (value > ans) {
            ans = value;
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        int curr_weight = weights[i];
        int curr_value = values[i];
        int next_val = value + curr_value;
        int next_W = W - curr_weight;
        if (next_W < 0) {
            if (value > ans) ans = value;
            continue;
        }
        search_next(weights + (i + 1), values + (i + 1), n - (i + 1), next_val, next_W);
    }

    return;
}

int main() {
    int n, W;
    scanf("%d %d", &n, &W);
    int *weights = (int*)malloc(sizeof(int)*n);
    int *values = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    search_next(weights, values, n, 0, W);
    printf("%d\n", ans);

    return 0;
}

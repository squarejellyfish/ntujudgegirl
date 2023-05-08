#include <stdio.h>
#include <stdlib.h>

int main() {
    int grades[12] = {0};

    int min = 102, min2 = 101, nc = 0; 
    for (int i = 0; i < 12; i++) {
        int check = scanf("%d", &grades[i]);
        if (!check) {
            char dummy[10];
            scanf(" %s", dummy);
            grades[i] = -1;
            nc++;
            continue;
        }
        int curr = grades[i];
        if (i == 0) {
            min = curr;
            continue;
        }
        if (i == 1) {
            if (curr < min) {
                min2 = min;
                min = curr;
            } else {
                min2 = curr;
            }
            continue;
        }
        if (curr < min) {
            min2 = min;
            min = curr;
            continue;
        }
        if (curr < min2 && curr >= min) {
            min2 = curr;
        }
    }

    int sum = 0, ignore_c = 0;
    for (int i = 0; i < 12; i++) {
        if (grades[i] <= min2 && ignore_c < 2 && 12 - nc > 10) {
            ignore_c++;
            continue;
        }
        if (grades[i] == -1) {
            continue;
        }
        sum += grades[i];
    }
    float ans = (float)sum / 10;
    printf("%.0f\n", ans);
    (ans >= 59.5) ? printf("pass") : printf("fail");
    
    return 0;
}

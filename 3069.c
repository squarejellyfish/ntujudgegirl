#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char curr[100];
        scanf(" %[^\n]", curr);

        int len = strlen(curr);
        int stack[len];
        for (int i = 0; i < len; i++) {
            stack[i] = -1;
        }
        int p = -1, fail = 0;
        for (int i = 0; i < len; i++) {
            char c = curr[i];
            if (c == 40 || c == 91 || c == 123 || c == 60) {
                p++;
                stack[p] = c;
            }
            if (c == 41) {
                if (stack[p] == 40) {
                    stack[p] = -1;
                    p--;
                } else fail = 1;
            } else if (c == 62 || c == 93 || c == 125) {
                if (stack[p] == c - 2) {
                    stack[p] = -1;
                    p--;
                } else fail = 1;   
            }
        }
        (fail || p != -1) ? printf("N\n") : printf("Y\n"); 
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float curr;
    int icount = 0, fcount = 0;
    while (1) {
        int check = scanf("%f", &curr);
        if (!check) {
            char dummy[100];
            scanf(" %s", dummy);
            if (strcmp(dummy, "q") == 0) {
                break;
            }
            continue;
        }
        if ((int)curr == curr) {
            icount++;
        } else {
            fcount++;
        }
    }
    printf("%d\n%d\n", fcount, icount);

    return 0;
}

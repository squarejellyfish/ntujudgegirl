#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    scanf(" %s", name);

    for (int i = 0; i < strlen(name); i++) {
        name[i] = tolower(name[i]);    
    }

    char curr[100];
    int i = 1, ans = -1;
    while (1) {
        scanf(" %s", curr);
        if (strcmp(curr, "q") == 0) {
            break;
        }
    
        if (strcmp(curr, name) == 0) {
            ans = i;
        }
        i++;
    }
    if (ans != -1) {
        printf("Yes %d\n", ans);
    } else {
        printf("No %d\n", i - 1);
    }

    return 0;
}

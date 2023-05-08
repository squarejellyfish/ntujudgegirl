#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }
    char **list = (char**)malloc(sizeof(char*)*n);
    for (int i = 0; i < n; i++) {
        list[i] = (char*)malloc(sizeof(char)*100);
    }

    int end = 0;
    for (int i = 0; i < n; i++) {
        char food[100];
        int demand;
        scanf(" %s %d", food, &demand);

        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(food, list[i]) == 0) {
                count[i] += demand;
                found = 1;
                break;
            } 
        }
        if (!found) {
            strcpy(list[end], food);
            count[end] += demand;
            end++;
        }
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > count[max]) {
            max = i;
        }
    }
    printf("%s %d\n", list[max], count[max]);

    return 0;
}

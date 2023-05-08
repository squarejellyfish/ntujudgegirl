#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name1[10], name2[10];
    scanf("%s", name1);
    scanf(" %s", name2);

    char path1[20] = "../app/";
    char path2[20] = "../app/";
    strcat(path1, name1);
    strcat(path2, name2);

    int arr[1024];

    FILE *f1 = fopen(path1, "r");
    int num, c = 0;
    while (fscanf(f1, "%d", &num) != EOF) {
        arr[c] = num;
        c++;
    }
    fclose(f1);
    FILE *f2 = fopen(path2, "r");
    while (fscanf(f2, "%d", &num) != EOF) {
        arr[c] = num;
        c++;
    }
    fclose(f2);

    for (int i = 0; i < c - 1; i++) {
        int min = i;
        for (int j = i + 1; j < c; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < c; i++) {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}

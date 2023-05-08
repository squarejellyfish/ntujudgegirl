#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student_ {
    char name[20];
    int prog;
};

typedef struct Student_ Student;

int main() {
    char name1[30], name2[30], path1[30] = "../app/", path2[30] = "../app/";
    scanf("%s %s", name1, name2);

    strcat(path1, name1);
    strcat(path2, name2);
    FILE *mid = fopen(path1, "r");
    FILE *final = fopen(path2, "r");
    char dummy[20], curr[30];
    fscanf(mid, "%s", dummy);
    fscanf(final, "%s", dummy);
    Student students[100];
    int c = 0;
    while (fscanf(mid, " %s", curr) != EOF) {
        char *name = strtok(curr, ",");
        int score = atoi(strtok(NULL, ","));

        int progress;
        fscanf(final, " %s", curr);
        char *_ = strtok(curr, ",");
        progress = atoi(strtok(NULL, ",")) - score;

        Student s;
        strcpy(s.name, name);
        s.prog = progress;
        students[c] = s;
        c++;
    }
    fclose(mid);
    fclose(final);

    int most = -100;
    for (int i = 0; i < c; i++) {
        if (students[i].prog > most) {
            most = students[i].prog;
        }
    }

    int p = 0;
    printf("Dark Horse: ");
    for (int i = 0; i < c; i++) {
        if (students[i].prog == most) {
            if (!p) {
                printf("%s", students[i].name);
                p = 1;
            } else {
                printf(" & %s", students[i].name);
            }
        }
    }
    puts("");

    printf("%.1f Points Progress\n", (float)most);

    return 0;
}

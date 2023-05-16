#include <stdio.h>
#include <stdlib.h>

struct Employee_
{
    char Name[20];
    char Phone[11];
    int id;
};

typedef struct Employee_ Employee;

int main(int argc, char *argv[])
{
    Employee emps[3];

    for (int i = 0; i < 3; i++) {
        Employee curr;
        scanf(" %s", curr.Name);
        scanf(" %s", curr.Phone);
        scanf("%d", &curr.id);
        emps[i] = curr;
    }
    int id, found = 0;
    scanf("%d", &id);
    for (int i = 0; i < 3; i++) {
        if (emps[i].id == id) {
            found = 1;
            printf("found\n");
            printf("Name: %s\n", emps[i].Name);
            printf("Phone: %s\n", emps[i].Phone);
            printf("Id: %d\n", emps[i].id);
        }
    }
    if (!found) printf("not found\n");

    return EXIT_SUCCESS;
}

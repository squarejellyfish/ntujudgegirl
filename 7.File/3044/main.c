#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[30];
    scanf("%s", fname);

    int require = 0, elective = 0;

    FILE *f = fopen(fname, "r");
    char line[100];
    fscanf(f, " %[^\n]", line);
    while (fscanf(f, " %[^\n]", line) != EOF)
    {
        char *p = strtok(line, ",");
        p = strtok(NULL, ",");
        if (strcmp(p, "R") == 0)
        {
            p = strtok(NULL, ",");
            int curr = *p - 48;
            p = strtok(NULL, ",");

            if (strcmp(p, "F\r") == 0)
            {
                continue;
            }

            require += curr;
        }
        if (strcmp(p, "E") == 0)
        {
            p = strtok(NULL, ",");
            int curr = *p - 48;
            p = strtok(NULL, ",");

            if (strcmp(p, "F\r") == 0)
            {
                continue;
            }

            elective += curr;
        }
    }
    fclose(f);

    int rdiff = 72 - require, ediff = 28 - elective;

    printf("Required: %d\n", require);
    printf("Elective: %d\n", elective);

    if (rdiff > 0 || ediff > 0)
    {
        printf("N\n");
        if (ediff > 0 && rdiff > 0)
        {
            printf("Student still needs to complete %d required credits "
                   "& %d elective credits for graduation.",
                   rdiff, ediff);
        }
        else
        {
            (rdiff > 0)
                ? printf("Student still needs to complete %d required credits "
                         "for graduation.",
                         rdiff)
                : printf("Student still needs to complete %d elective credits "
                         "for graduation.",
                         ediff);
        }
    } else printf("Y\n");

    return 0;
}

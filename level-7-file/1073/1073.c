#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    FILE *file = fopen("file.txt", "w");
    while (1)
    {
        scanf("%lf", &num);
        if (num == -1)
        {
            break;
        }
        fprintf(file, "%.6lf ", num);
    }
    fclose(file);

    file = fopen("file.txt", "r");
    while (1)
    {
        double num;
        fscanf(file, "%lf", &num);
        if (feof(file))
        {
            break;
        }
        printf("%.1lf ", num);
    }
    fclose(file);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int H, A;
    char filename[30];
    scanf("%d %d %s", &H, &A, filename);

    FILE *history = fopen("history.txt", "w");
    FILE *f = fopen(strcat(filename, ".txt"), "r");
    if (!f)
    {
        fprintf(history, "failed:(");
        fclose(history);
        return 0;
    }
    if (H == 0) {
        fprintf(history, "success!");
        fclose(history);
        return 0;
    }

    int n;
    fscanf(f, "%d", &n);

    int success = 0;
    for (int i = 0; i < n; i++)
    {
        if (success)
            break;
        int ai, hi;
        fscanf(f, "%d %d", &hi, &ai);
        while (hi > 0)
        {
            H -= ai;
            if (H < 0)
            {
                success = 1;
                fprintf(history, "%d %d %d\n", i, hi, H);
                fprintf(history, "success!");
                break;
            }
            else
            {
                hi -= A;
                fprintf(history, "%d %d %d\n", i, hi, H);
            }
        }
    }
    if (!success)
        fprintf(history, "failed:(");
    fclose(f);
    fclose(history);

    return EXIT_SUCCESS;
}

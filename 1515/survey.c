#include <stdio.h>
#include <stdlib.h>
 
int print_avg(const char* s) {
    FILE *f = fopen(s, "r");
    int curr, sum = 0, c = 0;
    while (fscanf(f, "%d", &curr) != EOF) {
        sum += curr; 
        c++;
    }
    fclose(f);
 
    printf("%.2f\n", (float)sum / c);
 
    return 0;
}

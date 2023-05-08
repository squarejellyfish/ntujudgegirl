#include <stdio.h>
#include <stdlib.h>

char tg[] = "癸甲乙丙丁戊己庚辛壬";
char dz[] = "亥子丑寅卯辰巳午未申酉戌";

void YEAR(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        int tgi = ((curr - 3) % 10) * 3;
        int dzi = ((curr - 3) % 12) * 3;

        printf("%d = %c%c%c%c%c%c年\n", curr, tg[tgi], tg[tgi+1], tg[tgi+2], dz[dzi], dz[dzi+1], dz[dzi+2]);
    }
}

int main() {

    int years[1024], c = 0, num;

    while (scanf("%d", &num) == 1) {
        years[c] = num;
        c++;
    }

    YEAR(c, years);

    return 0;
}

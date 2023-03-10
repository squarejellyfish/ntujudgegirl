#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char numbers[30] = "壹貳參肆伍陸柒捌玖";
    scanf("%d", &n);

    if (n < 1 || n > 99999)
    {
        printf("out of range");
        return 0;
    }

    int wan, chien, bai, ten, ge;
    wan = n / 10000 * 3;
    chien = n / 1000 % 10 * 3;
    bai = n / 100 % 10 * 3;
    ten = n % 100 / 10 * 3;
    ge = n % 10 * 3;

    if (wan != 0)
    {
        printf("%c%c%c萬", numbers[wan - 3], numbers[wan - 2], numbers[wan - 1]);
    }
    if (chien != 0)
    {
        printf("%c%c%c仟", numbers[chien - 3], numbers[chien - 2], numbers[chien - 1]);
    }
    if (bai != 0)
    {
        printf("%c%c%c佰", numbers[bai - 3], numbers[bai - 2], numbers[bai - 1]);
    }
    if (ten != 0)
    {
        printf("%c%c%c拾", numbers[ten - 3], numbers[ten - 2], numbers[ten - 1]);
    }
    if (ge != 0)
    {
        printf("%c%c%c", numbers[ge - 3], numbers[ge - 2], numbers[ge - 1]);
    }
    printf("元整");

    return 0;
}

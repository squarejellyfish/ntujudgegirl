#include <stdio.h>
#include <stdlib.h>

char nums[10][10] = {"_", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char tnums[10][10] = {"_", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char ten_nums[11][10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void PrintNum(int n)
{
    int hund = n / 100;
    if (hund)
    {
        printf("%s hundred ", nums[hund]);
        n = n % 100;
    }
    int check = n / 10 * 10;
    int tenth = n;
    if (check)
    {
        if (tenth < 20 && tenth > 9)
        {
            printf("%s ", ten_nums[tenth - 10]);
            return;
        }
        else
        {
            printf("%s ", tnums[tenth / 10]);
            n = n % 10;
        }
    }
    int one = n;
    if (one)
    {
        printf("%s ", nums[one]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("one dollar");
        return 0;
    }

    int million = n / 1000000;
    if (million)
    {
        PrintNum(million);
        printf("million ");
        n %= 1000000;
    }

    int thousand = n / 1000;
    if (thousand)
    {
        PrintNum(thousand);
        printf("thousand ");
        n %= 1000;
    }

    if (n)
    {
        PrintNum(n);
        printf("dollars");
    }

    return 0;
}

#include <stdio.h>

#define LBIT 2147483648

int main(int argc, char const *argv[])
{
    int w, h, n;
    char one, zero;
    scanf("%d %d", &w, &h);
    scanf(" %c %c", &one, &zero);
    n = w * h / 32 + 1;
    char output[w * h];

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        unsigned int num;
        scanf(" %u", &num);
        int bit = 1;
        while (bit <= 32)
        {
            if (index == w * h)
                break;
            if (num & LBIT)
                output[index] = one;
            else
                output[index] = zero;
            num = num << 1;
            bit++;
            index++;
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%c", output[w * i + j]);
        }
        printf("\n");
    }

    return 0;
}

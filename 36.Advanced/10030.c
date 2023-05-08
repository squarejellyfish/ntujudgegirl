// This problem needs to be solved in C++
#include <stdio.h>
#include <stdlib.h>

int BitCount(long long u)
{
    long long uCount;

    uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}

int main()
{
    int N, M;
    while (scanf("%d %d", &N, &M) == 2)
    {
        int *numbers = (int *)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++)
        {
            int num = 0;
            for (int j = 0; j < M; j++)
            {
                char c;
                scanf(" %c", &c);
                if (c == '1')
                {
                    num = num << 1;
                    num++;
                }
                else
                {
                    num = num << 1;
                }
            }
            numbers[i] = num;
        }
        int S = 0;
        for (int i = 0; i < N - 1; i++)
        {
            // sim(A, B) = AND(A, B) / OR(A, B)
            int A = numbers[i];
            for (int j = i + 1; j < N; j++)
            {
                int B = numbers[j];
                int num = BitCount(A & B);
                int denum = BitCount(A | B);
                // printf("calcing: %d / %d\n", num, denum);
                if ((float)num / denum > 0.8)
                {
                    S++;
                }
            }
        }
        // printf("S: %d\n", S);
        float ans = ((float)S / (N * (N - 1) / 2)) * 100;
        printf("%.2f\n", ans);
    }

    return 0;
}
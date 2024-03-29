// score.h
#include <stdio.h>
#include <stdlib.h>

void inputAry(int n, int *P)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &P[i]);
    }
}
void printAry(int n, int *P)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", P[i]);
    }
}
double Avg(int n, int *P)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += P[i];
    }
    return sum / n;
}
int MaxScore(int n, int *P)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (P[i] > P[max])
        {
            max = i;
        }
    }
    return max;
}
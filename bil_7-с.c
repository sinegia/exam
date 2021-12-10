#include <stdio.h>
#include <stdlib.h>

#define mmin 2
#define mmax 5

#define mpass 4.6f


int n;
int *mark;

int main()
{
    printf("n: ");
    scanf("%d", &n);

    mark = (int *) malloc(n * sizeof(int));

    printf("mark: ");
    for (int i = 0; i < n; i++)
       scanf("%d", &mark[i]);
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++)
    sum += mark[i];

    float avg = (float) sum / (float) n;

    printf("avg: %0.1f\n", avg);
    if (avg < mpass)
    printf("no");
    else
    printf("yes");

    free(mark);
return 0;
}
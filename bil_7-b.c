#include <stdio.h>
#include <stdlib.h>

#define mmin 2
#define mmax 5
#define n_max 100
#define mpass 4.6f

int n;
int mark[n_max];



float calc_avg (int n, int mark[n_max])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += mark[i];
    return (float) sum / (float) n;    
}

int main()
{
    printf("n: ");
    scanf("%d", &n);

    printf("mark: ");
    for (int i = 0; i < n; i++)
       scanf("%d", &mark[i]);
    printf("\n");
    calc_avg(n, mark[n_max]);
return 0;
}
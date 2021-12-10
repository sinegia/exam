#include <stdio.h>
#include <stdlib.h>

int main()
{
#define month 12
    int salary[month];

#define salary_min 1000
#define salary_max 5000
    for (int i = 0; i < month; i++)
    salary[i] = salary_min + rand() % (salary_max - salary_min + 1);

    for (int i = 0; i < month; i++)
    {
        printf("%6d", (i + 1));
    }
    printf("\n");

    for (int i = 0; i < month; i++)
    {
        printf("%6d", salary[i]);
    }
    printf("\n");

    float year_tax = 0.0f;
    for (int i = 0; i < month; i++)
    {
        float tax = salary[i] * 0.02f;
        year_tax += tax;
        printf("% 6.1f", tax);
    }
    printf("\n");

//sum
    int year_sum = 0;
    for (int i = 0; i < month; i++)
    {
        year_sum += salary[i];
    }
    printf("year_sum = %d\n", year_sum);

//avg
    float year_avg = 0.0f;
    year_avg = (float) year_sum / (float) month;
    printf("year_avg = %0.2f\n", year_avg);
    printf("year_tax = %0.2f\n", year_tax);

    return 0;
}

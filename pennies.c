#include <stdio.h>
#include <math.h>

int main()
{
    double d = 0.0, p = 0.0, t = 0.0; // User inputs these values; d stands for number of days, and p stands for the number of pennies received on the first day. 
    printf("Days in month: ");
    scanf("%lf", &d);
    if (d < 28)
    {
        printf("Please enter a number of days in the month greater than 27 and less than 32: ");
        scanf("%lf", &d);
    }
    if (d > 31)
    {
        printf("Please enter a number of days in the month greater than 27 and less than 32: ");
        scanf("%lf", &d);
    }
    if (d == 28)
    {
        printf("Pennies on first day: ");
        scanf("%lf", &p);
        if (p < 0)
        {
           printf("Please retry: ");
           scanf("%lf", &p);
        }
        t = (p + (p * (pow(2, 1))) + (p * (pow(2, 2))) + (p * (pow(2, 3))) + (p * (pow(2, 4))) + (p * (pow(2, 5))) + (p * (pow(2, 6))) + (p * (pow(2, 7))) + (p * (pow(2, 8))) + (p * (pow(2, 9))) + (p * (pow(2, 10))) + (p * (pow(2, 11))) + (p * (pow(2, 12))) + (p * (pow(2, 13))) + (p * (pow(2, 14))) + (p * (pow(2, 15))) + (p * (pow(2, 16))) + (p * (pow(2, 17))) + (p * (pow(2, 18))) + (p * (pow(2, 19))) + (p * (pow(2, 20))) + (p * (pow(2, 21))) + (p * (pow(2, 22))) + (p * (pow(2, 23))) + (p * (pow(2, 24))) + (p * (pow(2, 25))) + (p * (pow(2, 26))) + (p * (pow(2, 27)))) / 100; 
        printf("$%.2lf\n", t); // that was a long math problem, how to pow(2,1 through (d-1))? without typing manually
    }
    if (d == 29)
    {
        printf("Pennies on first day: ");
        scanf("%lf", &p);
        if (p < 0)
        {
           printf("Please retry: ");
           scanf("%lf", &p);
        }
        t = (p + (p * (pow(2, 1))) + (p * (pow(2, 2))) + (p * (pow(2, 3))) + (p * (pow(2, 4))) + (p * (pow(2, 5))) + (p * (pow(2, 6))) + (p * (pow(2, 7))) + (p * (pow(2, 8))) + (p * (pow(2, 9))) + (p * (pow(2, 10))) + (p * (pow(2, 11))) + (p * (pow(2, 12))) + (p * (pow(2, 13))) + (p * (pow(2, 14))) + (p * (pow(2, 15))) + (p * (pow(2, 16))) + (p * (pow(2, 17))) + (p * (pow(2, 18))) + (p * (pow(2, 19))) + (p * (pow(2, 20))) + (p * (pow(2, 21))) + (p * (pow(2, 22))) + (p * (pow(2, 23))) + (p * (pow(2, 24))) + (p * (pow(2, 25))) + (p * (pow(2, 26))) + (p * (pow(2, 27))) + (p * (pow(2, 28)))) / 100; 
        printf("$%.2lf\n", t);
    }
    if (d == 30)
    {
        printf("Pennies on first day: ");
        scanf("%lf", &p);
        if (p < 0)
        {
           printf("Please retry: ");
           scanf("%lf", &p);
        }
        t = (p + (p * (pow(2, 1))) + (p * (pow(2, 2))) + (p * (pow(2, 3))) + (p * (pow(2, 4))) + (p * (pow(2, 5))) + (p * (pow(2, 6))) + (p * (pow(2, 7))) + (p * (pow(2, 8))) + (p * (pow(2, 9))) + (p * (pow(2, 10))) + (p * (pow(2, 11))) + (p * (pow(2, 12))) + (p * (pow(2, 13))) + (p * (pow(2, 14))) + (p * (pow(2, 15))) + (p * (pow(2, 16))) + (p * (pow(2, 17))) + (p * (pow(2, 18))) + (p * (pow(2, 19))) + (p * (pow(2, 20))) + (p * (pow(2, 21))) + (p * (pow(2, 22))) + (p * (pow(2, 23))) + (p * (pow(2, 24))) + (p * (pow(2, 25))) + (p * (pow(2, 26))) + (p * (pow(2, 27))) + (p * (pow(2, 28))) + (p * (pow(2, 29)))) / 100; 
        printf("$%.2lf\n", t);
    }
    if (d == 31)
    {
        printf("Pennies on first day: ");
        scanf("%lf", &p);
        if (p < 0)
        {
           printf("Please retry: ");
           scanf("%lf", &p);
        }
        t = (p + (p * (pow(2, 1))) + (p * (pow(2, 2))) + (p * (pow(2, 3))) + (p * (pow(2, 4))) + (p * (pow(2, 5))) + (p * (pow(2, 6))) + (p * (pow(2, 7))) + (p * (pow(2, 8))) + (p * (pow(2, 9))) + (p * (pow(2, 10))) + (p * (pow(2, 11))) + (p * (pow(2, 12))) + (p * (pow(2, 13))) + (p * (pow(2, 14))) + (p * (pow(2, 15))) + (p * (pow(2, 16))) + (p * (pow(2, 17))) + (p * (pow(2, 18))) + (p * (pow(2, 19))) + (p * (pow(2, 20))) + (p * (pow(2, 21))) + (p * (pow(2, 22))) + (p * (pow(2, 23))) + (p * (pow(2, 24))) + (p * (pow(2, 25))) + (p * (pow(2, 26))) + (p * (pow(2, 27))) + (p * (pow(2, 28))) + (p * (pow(2, 29))) + (p * (pow(2, 30)))) / 100; 
        printf("$%.2lf\n", t);
    }
    return 0;
}

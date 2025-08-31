#include <stdio.h>

/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.*/

int main()
{
    int month;
    printf("enter the value of month\n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("JANUARY , 31 days");
        break;
    case 2:
        printf("FEBRUARY , 28 days");
        break;
    case 3:
        printf("MARCH , 31 days");
        break;
    case 4:
        printf("APRIL , 30 days");
        break;
    case 5:
        printf("MAY , 31 days");
        break;
    case 6:
        printf("JUNE , 30 days");
        break;
    case 7:
        printf("JULY , 31 days");
        break;
    case 8:
        printf("AUGUST , 31 days");
        break;
    case 9:
        printf("SEPTEMBER , 30 days");
        break;
    case 10:
        printf("OCTOBER , 31 days");
        break;
    case 11:
        printf("NOVEMBER , 30 days");
        break;
    case 12:
        printf("DECEMBER , 31 days");
        break;
    }
    return 0;
}

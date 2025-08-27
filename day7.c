#include <stdio.h>

/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.*/

int main()
{
    int year;
    printf("enter the value of year");
    scanf("%d" , &year);
    if (year % 100 == 0)
        if (year % 400 == 0)
            printf("the year is leap year");
        else
            printf("the year is not leap year");
    else if (year % 4 == 0)
        printf("the year is leap year");
    else
        printf("the year is not leap year");
    return 0;
}


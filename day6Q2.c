#include <stdio.h>

/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

int main()
{
     int k;
     printf("enter the value of k");
     scanf("%d", &k);
     if (k > 0)
     printf("the value is positive");
     else if (k < 0)
     printf("the value is negative");
     else 
     printf("the value is zero");
     return 0;
}

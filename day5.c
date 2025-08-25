/*Q9 Write a program to calculate simple and compound interest for given principal, rate and time.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float simp, comp, principal, rate, time, amount;
    printf("enter the value of principal \n");
    printf("enter the value of time in years \n");
    printf("ente rthe value of rate of interest \n");
    scanf(" %f", &principal);
    scanf(" %f", &rate);
    scanf(" %f", &time);
    simp = principal * rate * time / 100;
    amount = principal * pow((1 + rate / 100), time);
    comp = amount - principal;
    printf("the value of simple interest %f\n", simp);
    printf("the value of compound interest %f\n", comp);
    return 0;
}

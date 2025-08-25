#include <stdio.h>
/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/

int main() { int r , area=0 , circumference=0;
             printf("enter the value of radius:     ");
             scanf("%d" , &r);
             area = r*r*22/7;
             circumference = 2*22/7*r;
             printf("the value of area %d\n" , area);
             printf("the value of circumference %d\n" , circumference);
             return 0;











}
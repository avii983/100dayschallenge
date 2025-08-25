#include <stdio.h>
/*Q7: Write a program to swap two numbers without using a third variable.*/

int main() { int k=0 , h=0;
             printf("enter the value of k and h:      ");
             scanf("%d %d" , &k , &h);
            k = k+h;
            h = k-h;
            k = k-h;
             printf("the value of k is %d\n" , k);
             printf("the value of h is %d\n" , h);
             return 0;
            }

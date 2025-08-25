#include <stdio.h>
/*Q6: Write a program to swap two numbers using a third variable.*/

int main() { int k , h , total=0;
            printf("enter the value of two variables k and h:     ");
            scanf("%d %d" , &k , &h);
            total = k + h;
            k = total - k;
            h = total - h;
            printf("the value of k is %d\n" , k);
            printf("the value of h is %d\n" , h);
            return 0;
        }

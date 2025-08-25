
/*Q8: Write a program to find and display the sum of the first n natural numbers.*/
#include <stdio.h>
int main() { int n ;
            printf("enter the value of n");
            scanf("%d" , &n); 
            n = n*(n+1)/2;
            printf("the value of total is %d\n" , n);
            return 0;
        }


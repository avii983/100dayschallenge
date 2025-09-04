#include <stdio.h>
/*Q30: Write a program to reverse a given number.*/
 int main(){ int num , division = 1;
             printf("enter the value of number\n");
             scanf("%d" , &num);
             while(num>0)
             { division = num % 10;
                printf("%d" , division);
                num /= 10;
             } return 0;
 }

